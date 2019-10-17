const express = require('express')
const app = express()
app.get('/', function (req, res) {
	var obj={
		name:req.query.fname
		// id:req.query.ids,
		// text:req.query.tes,
		// meaning:req.query.me
	}
	res.send("123");
});
app.listen(3000,function()
{
	console.log("SERVER STARTED SUCCESSFULLY");
})