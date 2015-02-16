/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_io_FileInputStream */

#ifndef _Included_java_io_FileInputStream
#define _Included_java_io_FileInputStream
#ifdef __cplusplus
extern "C" {
#endif
#undef java_io_FileInputStream_MAX_SKIP_BUFFER_SIZE
#define java_io_FileInputStream_MAX_SKIP_BUFFER_SIZE 2048L
/*
 * Class:     java_io_FileInputStream
 * Method:    open
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_io_FileInputStream
 * Method:    read0
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_read0
  (JNIEnv *, jobject);

/*
 * Class:     java_io_FileInputStream
 * Method:    readBytes
 * Signature: ([BII)I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_readBytes
  (JNIEnv *, jobject, jbyteArray, jint, jint);

/*
 * Class:     java_io_FileInputStream
 * Method:    skip
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_java_io_FileInputStream_skip
  (JNIEnv *, jobject, jlong);

/*
 * Class:     java_io_FileInputStream
 * Method:    available
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_java_io_FileInputStream_available
  (JNIEnv *, jobject);

/*
 * Class:     java_io_FileInputStream
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     java_io_FileInputStream
 * Method:    close0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_java_io_FileInputStream_close0
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
