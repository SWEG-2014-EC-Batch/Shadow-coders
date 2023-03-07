void setup()
      {
          size(500,500);
          background(#ffffff);
           frameRate(1000000);
       }
       
       
       
       
       
       void draw()
      {
           if(mousePressed)  
            {
              fill(0);
              strokeWeight(10);
              point(mouseX,mouseY);
            }
            
            
            strokeWeight(0);
            
             
            if((mouseX*mouseX)+(mouseY*mouseY)<400)
            {
            fill(#FAC400);
            if(mousePressed)
            {background(#ffffff);}
            }
            
            else
            {
            fill(#F5E3A1);
            }
            
            ellipseMode(CENTER);
            ellipse(10,10,20,20);
            
            fill(0);
            textSize(10);
            textAlign(CENTER);
            text("clear",10,12);
           
       }
