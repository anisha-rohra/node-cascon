#include <node.h>
#include <v8.h>

using namespace v8;

void RunCallback(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);
  






}

void Init(Handle<Object> exports, Handle<Object> module) {
  Isolate* isolate = Isolate::GetCurrent();
  
  Local<String> js_func = String::NewFromUtf8(isolate, "callback");
  Local<Function> c_func = FunctionTemplate::New(isolate, RunCallback)->GetFunction();

  exports->Set(js_func, c_func);
}

NODE_MODULE(addon, Init)
