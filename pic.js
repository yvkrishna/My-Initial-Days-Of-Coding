var telegram= require("telegram-bot-api");
var fs=require("fs");
var player = require('play-sound')(opts = {})
// var express=require("express");
// var app=express();
//const TelegramBot = require('node-telegram-bot-api');


var api = new telegram({
        token: '874332695:AAHx-LrkwdDXLA6cAwsICWwXM_QHkiZim2U',
        updates: {
        	enabled: true
    }
});

// api.on('message',function(message)
//  	{
// console.log(message.audio);
// var buffer = fs.writeFileSync('audio.mp3');
// });






var audio = player.play('Bhaja_Govindam.mp3', function(err){
  if (err && !err.killed) throw err
})

audio.kill()











// app.get('/photo',function(req,res)
// {
// 	var image=req.query
// 	api.on('message',function(message)
// 	{


// 		var id=message.chat.id;
// 		var fname=message.chat.first_name;
// 		var lname=message.chat.last_name;
// 		api.sendPhoto({
// 			chat_id:id,
// 			caption:"hello "+fname+" "+lname,
// 			photo:'http://localhost:5000/photo.jpg'
// 		})
// 		.then(function(data)
// 		{
// 	    	console.log(data);
// 		});
// 	});
// });





// api.on("inline.query", function (query) {
//     var data = query.query;
//     // do what you want with data, then
//     api.answerInlineQuery(query.id, [{
//         id: '0',
//         type: 'article',
//         title: 'Preview Title',
//         description: 'Preview Description',
//         message_text: 'Inline query data: ' + data
//     }]);
// });




