
var Observable = require("FuseJS/Observable");

var userid = Observable("");
var password = Observable("");
var ID = Observable("");

function Signin(){
 
    // router.push("Home");
    var opts = ({
            	'username' : userid.value,
                'password' : password.value
              });

	fetch('http://c41f6608.ngrok.io/users/signin',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/JSON"
	            },
	            body : JSON.stringify(opts)
	               
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )

	            console.log(JSON.stringify(res));

	            console.log( JSON.parse(res._bodyInit));

	            ID = userid.value;

	            if( JSON.parse(res._bodyInit) == true){
	            	router.push("Home", ID);
	            	console.log("Move to Home");
	            	console.log(ID);
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });
   console.log(JSON.stringify(opts));
   console.log('sign'); //Sign_in 함수가 호출되었는지 확인
}

// function SignClicked(){	
//     console.log("Move to Page.Home");
//     router.push("Home");

// }


function Signup(){
	router.push("Uppage");
	console.log("Move to Uppage");
}


module.exports = {
	Signin : Signin,
	userid : userid,
	password : password,
	Signup : Signup,
	ID : ID
};