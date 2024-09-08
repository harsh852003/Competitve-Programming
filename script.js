const modeBtn = document.getElementById("mode");
let currentMode = 'light';

modeBtn.addEventListener("click",()=>{
    console.log("heyeyeyey");
    if(currentMode==='light'){
        currentMode = 'dark';
        document.body.style.backgroundColor = 'black';
    }
    else{
        currentMode = 'light';
        document.body.style.backgroundColor = 'white';
    }
    console.log(currentMode);
})
