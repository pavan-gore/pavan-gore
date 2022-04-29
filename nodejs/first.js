var http=require('http')
http.createServer(function(req,res){
	res.writeHead(200,{
		'content-type':'text/html'
	})
	res.end("<h1>This is node JS</h1>")
	console.log(req)
})
.listen(8080)