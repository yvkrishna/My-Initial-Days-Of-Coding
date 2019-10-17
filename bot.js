var telegram= require("telegram-bot-api");
var mongojs = require("mongojs");
var db = mongojs("mongodb://vedha:krishna123@cluster0-shard-00-00-kbuhh.mongodb.net:27017/amritapuri_places?ssl=true&replicaSet=Cluster0-shard-0&authSource=admin",["places"]);
var api = new telegram({
        token: '727428944:AAGJYB8aroKjONm2fyyJCqtIXPnsPtc_NgM',
        updates: {
        	enabled: true
    }
});
var request = require("request");

api.on('message', function(message)
{

	var options = { method: 'GET',
	  url: 'https://api.wit.ai/message',
	  qs: { v: '20190709', q: message.text.toString() },
	  headers: { Authorization: 'Bearer 3ZREFCCESJD5YI7FAPZ6NDBMAL4I67G4' } 
	};

	request(options, function (error, response, body) {
	  if (error) throw new Error(error);
	  	console.log(body);
	  console.log(body.entities.location[0].value);
	});


    var text=message.text;
    console.log(text);

    var k;
    	

    if(text.charCodeAt(2)>=97)
    {
    	text=text.toLowerCase();
    	text=text.replace(" ","_");
    	k=1;
    	var mess={
			name:text,
		}
	}
	else
	{
		k=0;
		var mess={
			id:text,
		}
		console.log(text[2]);
	}


		//console.log(mess)
	db.places.find(mess,function(err,data)
	{
		if(err)
		{
			console.log(err)
		}
		else
		{
			if(data.length>0)
			{
				console.log("found");
				if(k==1 && data[0].id != '000'){
					api.sendMessage({chat_id:message.chat.id,text:data[0].id});
					api.sendMessage({chat_id:message.chat.id,text:data[0].meaning});
					api.sendMessage({chat_id:message.chat.id,text:data[0].text});
				}
				else if (k==1 && data[0].id == '000')
				{
					api.sendMessage({chat_id:message.chat.id,text:data[0].name});
					api.sendMessage({chat_id:message.chat.id,text:data[0].text});
				}
				else{
					var m=data[0].name;
					m=m.replace("_"," ");
					api.sendMessage({chat_id:message.chat.id,text:m});
					api.sendMessage({chat_id:message.chat.id,text:data[0].text});

				}
				
			}
			else
			{
				if(message.text=="/start")
				{
					var hello=message.chat.first_name;
						api.sendMessage({chat_id:message.chat.id,text:"welcome "+hello});
				}
				else if(message.text.toLowerCase()=="thank you")
				{
					api.sendMessage({chat_id:message.chat.id,text:"You are Welcome"});
					api.sendMessage({chat_id:message.chat.id,text:"It's my pleasure"});
				}
				else if(message.text.toLowerCase()=="hi" || message.text.toLowerCase()=="hai" || message.text.toLowerCase()=="hello")	
				{
					var hello=message.chat.first_name;
					api.sendMessage({chat_id:message.chat.id,text:"welcome "+hello});
				}
				else
				{
						console.log("not found")
						api.sendMessage({chat_id:message.chat.id,text:"not found"});
				}
			}
		}
	})

});	