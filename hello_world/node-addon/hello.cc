/* Use the header files from node and v8 */
#include <>
#include <>


/* Use the v8 namespace */

/* Set this function to receive a FuncionCallbackInfo value */
void Method() {

  /* Get the current instance of the v8 isolate */

  /* Create a handle scope */

  /* Create a JavaScript string called 'world' in the isolate */

  /* Set the JavaScript string as the the return value */
}

/* Set this function to receive an object handle called 'exports' */
void Init() {

  /* Get the current instance of the v8 isolate */

  /* Create a JavaScript string called 'hello' in the isolate */

  /* Create a JavaScript function in the isolate that is
     bound to  the 'Method' function above in the isolate
  */

  /* Create a property in exports with the 'hello' string and then assign it
     with the 'Method' JavaScript function
  */ 
}

/* Set this module to invoke the 'Init' function on creation*/
NODE_MODULE()
