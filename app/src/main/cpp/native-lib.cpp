#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_jetlaghaters_cuckooclock_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello world";
    return env->NewStringUTF(hello.c_str());
}
