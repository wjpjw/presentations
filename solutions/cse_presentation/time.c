       void timeupdate(){
          current_task->inst[PC].tick--;
          if(!current_task->inst[PC].tick){
            PC++;
          }
          if(PC==current_task->nr_inst){
            schedule();
          }
       }  
