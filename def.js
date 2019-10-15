var fs=require("fs");
var telegram=require("telegram-bot-api");
var api = new telegram({
	token:'874332695:AAHx-LrkwdDXLA6cAwsICWwXM_QHkiZim2U',
	updates: {
        	enabled: true
    }
});
// api.on("message",function(message)
// {

	
// 		var search=fs.readFileSync("hello.txt");
// 		var pos=search.includes(message.text.toLowerCase());
// 		var chatid=

// 		console.log(message.text)
// 		if(pos==true){
// 			console.log(pos);
// 			api.sendMessage({chat_id:message.chat.id,text:"Name aldready exist"});
// 		}
// 		else
// 			console.log("i am here");
// 		fs.appendFileSync("hello.txt",message.text.toLowerCase()+",");
// }); 


api.on("message",function(message)
{

	
		var str=fs.readFileSync("hello.txt").toString();
		var s=message.chat.id.toString()+":"+message.text.toLowerCase();
		var search=str.split(",")
		var pos=search.includes(s);

		console.log(message.text)
		if(pos==true){
			console.log(pos);
			api.sendMessage({chat_id:message.chat.id,text:"Name aldready exist"});
		}
		else
		{
			console.log("i am here");
			fs.appendFileSync("hello.txt",s+",");
		}
});

//var express=require("express");
// //var app=express();
// var r=require("request");
// app.get("/rates",function(req,res)
// {
// 	r("https://api.exchangeratesapi.io/latest?base=USD",function(error,response,body){
// 	console.log((JSON.parse(body).rates.INR).toString()+(JSON.parse(body).rates.PLN).toString());
// 	//res.send((JSON.parse(body).rates.INR).toString()+"\n"+(JSON.parse(body).rates.PLN).toString());
// 	//console.log(response);

// 	res.send("<h1>"+((JSON.parse(body).rates.INR).toString())+"</h1>")


// });
// });
// app.listen(4000,function()
// {
// 	console.log("hello");
// })

// api.on("message",function(message)
// {
// 	r("https://api.exchangeratesapi.io/latest?base=USD",function(error,response,body){
// 	var m=message.text;
// 	//var arr=body.split(",");
// 	//console.log(arr);
// 	api.sendMessage({chat_id:message.chat.id,text:"1 USD = "+(JSON.parse(body).rates[m])});
// 	// var pos=body.indexOf(m);
// 	// console.log(pos);
// 	// for(i=pos;body[i]!=',';i++)
// 	//	api.sendMessage({chat_id:message.chat.id,text:body[i]});
// 	//console.log(body[pos]);
// 	//api.sendMessage({chat_id:message.chat.id,text:arr[pos]});
// });
// });