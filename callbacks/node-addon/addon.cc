#include <node.h>
#include <v8.h>

using namespace v8;

void RunCallback(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);





}

void Init(Handle<Object> exports) {
  Isolate* isolate = Isolate::GetCurrent();
  exports->Set(String::NewFromUtf8(isolate, "callback"),
               FunctionTemplate::New(isolate, RunCallback)->GetFunction());
}

NODE_MODULE(addon, Init)
