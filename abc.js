/*var telegram = require('telegram-bot-api');

var api = new telegram({
        token: '874332695:AAHx-LrkwdDXLA6cAwsICWwXM_QHkiZim2U',
        updates: {
        	enabled: true
    }
});*/
/*api.on('message', function(message)
{
    // Received text message
    console.log(message.text);
    if((message.text)%2==0)
    	api.sendMessage({chat_id:message.chat.id,text:"even"});
    else
    	api.sendMessage({chat_id:message.chat.id,text:"odd"});
});
api.on("message",function(message)
{

});
*/var telegram = require('telegram-bot-api');

var api = new telegram({
    token: '874332695:AAHx-LrkwdDXLA6cAwsICWwXM_QHkiZim2U',
});

api.sendPhoto({
    chat_id: "757057924",
    caption: 'This is my test image',

    // you can also send file_id here as string (as described in telegram bot api documentation)
    photo: 'C:\Users\vedha krishna\Desktop\chatbots'
})
.then(function(data)
{
    console.log(util.inspect(data, false, null));
});