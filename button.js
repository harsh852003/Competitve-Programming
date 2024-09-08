let createButton = document.createElement('button');
createButton.textContent = 'Create';
document.body.appendChild(createButton);
let count = 1;



createButton.addEventListener('click',(e)=>{
    console.log("start");
    for(let i=1;i<=10;i++){
        let newButton = document.createElement('button');
        newButton.textContent = 'Created';
        newButton.id = `button-${count}`;
        document.body.appendChild(newButton);
        // console.log(`id of the button is ${newButton.id}`);

        //through the event object 
        newButton.addEventListener('click',(e)=>{
            console.log(`id of the button is ${e.target.id}`);
        });
        
        count++;
    
    
    }
    console.log("ye i have done");
})
