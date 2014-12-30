#include <nan.h>

using namespace v8;

NAN_METHOD(Version) {
  NanScope();

  Local<String> version = NanNew<String>("unknown");

  NanReturnValue(version);
}

void Init(Handle<Object> exports) {
  exports->Set(NanNew("version"), NanNew<FunctionTemplate>(Version)->GetFunction());
}

NODE_MODULE(lxcjs, Init)
