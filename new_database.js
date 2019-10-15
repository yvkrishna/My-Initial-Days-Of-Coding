// //var fs=require("fs");
// var telegram=require("telegram-bot-api");
var mongojs = require("mongojs");
//var db = mongojs("mongodb://vedha:krishna123@cluster0-shard-00-00-kbuhh.mongodb.net:27017/chatbot?replicaSet=Cluster0-shard-0&authSource=admin&retryWrites=true", ["msg"], {ssl:true})
 var db = mongojs("mongodb://vedha:krishna123@cluster0-shard-00-00-kbuhh.mongodb.net:27017/chatbot?ssl=true&replicaSet=Cluster0-shard-0&authSource=admin", ["msg","messages"]);

// // db.messages.insert({hi:"hi",value:123}, function(err,data){
// // console.log(data)
// // });
// var api = new telegram({
//         token: '874332695:AAHx-LrkwdDXLA6cAwsICWwXM_QHkiZim2U',
//         updates: {
//         	enabled: true
//     }
// });
// var express=require("express");
// var ab=express();

// ab.get("/insert",function(req,res)
// {

// 	var output ={
// 		name:"mycar",
// 	}

// 	db.msg.find(output,function(err,data)
// 	{
// 		if(err)
// 		{
// 			res.send(err);
// 		}
// 		else
// 		{
// 			res.send(data.length.toString());
// 		}
// 	})
// });

// api.on("message",function(message)
// {
// 	var messages={
// 		name:message.text,
// 	}
// 	db.msg.find(messages,function(err,data)
// 	{
// 		if(err)
// 		{
// 			console.log(err);
// 		}
// 		if (data.length>0)
// 		{
// 			api.sendMessage({chat_id:message.chat.id,text:data.length});
// 		}
// 		else
// 		{
// 			db.msg.insert(messages,function(err,data)
// 			{
// 				if(err)
// 				{
// 					console.log(err);
// 				}
// 				else
// 				{
// 					api.sendMessage({chat_id:message.chat.id,text:"successfully updated"})
// 				}
// 			})
// 		}
// 		// else
// 		// {
// 		// 	api.sendMessage({chat_id:message.chat.id,text:data.length})
// 		// }
// 	});
// });


// // ab.get("/display",function(req,res)
// // {

// // });

// // ab.listen(4000,function()
// // {
// // 	console.log("SERVER STARTED .........");
// // })




// // api.on('message', function(message)
// // {
// //     var n=message.text;			



// //     									// crud  c -create
// // });										//		 r -read
// 										//       u -update
// 										// 		 d -delete


var ab=require("express");
var a=require("fs");
var ch=ab();
ch.set('view engine','ejs')
ch.use(ab.static("public"));
ch.get("/login",function(req,res)
{
	res.sendFile(__dirname+"/public/login.html");
})

ch.get("/register",function(req,res)
{
	res.sendFile(__dirname+"/public/register.html");
})

ch.get("/loginsubmit",function(req,res)
{
	var a={
		email:req.query.username,
		password:req.query.password
	}
	db.msg.find(a,function(err,data)
	{
		if(err)
		{
			res.send(err)
		}
		else
		{	
			console.log(data)
			if(data.length>0)
				res.render('dash',{res:data});
			//res.send("welcome "+((data[0].email).replace("@gmail.com","")));
			else
				res.send("Entered details are incorrect")

		}
	})
})

ch.get("/registersubmit",function(req,res)
{
	var a={
		firstname:req.query.firstname,
		lastname:req.query.lastname,
		email:req.query.email,
		password:req.query.password,
		retypepassword:req.query.retypepassword,
		mobile:req.query.mobile,

	}
	db.msg.insert(a,function(err,data)
	{
		if(err)
		{
			res.send(err)
		}
		else
		{
			res.send("welcome your account have been created successfully")
		}
	})
})

ch.listen(4000,function(){
	console.log("SERVER STARTED .......");
})

























