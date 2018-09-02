//
// Created by SweetSalt on 2018/9/2.
//

#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_example_sweetsalt_binderipc_MainActivity_binderTest(JNIEnv *env, jobject instance) {

    // TODO

    std::string str = "Hello Binder";
    return env->NewStringUTF(str.c_str());
}

extern "C"
jstring
Java_com_example_sweetsalt_jnitest_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
    }
