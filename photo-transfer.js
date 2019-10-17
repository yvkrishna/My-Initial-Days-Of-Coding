var express=require("express");
var app=express();

app.use(express.static("public"));

app.get('/photo',function(req,res)
{
	res.sendFile(__dirname+"/public/myself.jpg");
});


app.listen(5000,function(){
	console.log("SERVER STARTED ...........");
})
