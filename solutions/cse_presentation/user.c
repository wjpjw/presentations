    while(true){  
      if(interrupted){ //simulate kernel-mode code
        store_context_of(current_task); //store context
        if(is_preemptive){
          schedule();
        }
        else{
	        time_update();
        }
      }
      else{ // runtime strictly < 1 clock cycle  
        exec(PC);//spurious exec function, print sth.
      }
    }
