/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_darrenyuan_nativefeedback_OpenSLRecorder */

#ifndef _Included_com_darrenyuan_nativefeedback_OpenSLRecorder
#define _Included_com_darrenyuan_nativefeedback_OpenSLRecorder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_darrenyuan_nativefeedback_OpenSLRecorder
 * Method:    nativeInit
 * Signature: (ILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_com_darrenyuan_nativefeedback_OpenSLRecorder_nativeInit
  (JNIEnv *, jobject, jint, jobject, jint, jint);

/*
 * Class:     com_darrenyuan_nativefeedback_OpenSLRecorder
 * Method:    nativeStart
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_darrenyuan_nativefeedback_OpenSLRecorder_nativeStart
  (JNIEnv *, jobject);

/*
 * Class:     com_darrenyuan_nativefeedback_OpenSLRecorder
 * Method:    nativeStop
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_darrenyuan_nativefeedback_OpenSLRecorder_nativeStop
  (JNIEnv *, jobject);

/*
 * Class:     com_darrenyuan_nativefeedback_OpenSLRecorder
 * Method:    nativeRelease
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_darrenyuan_nativefeedback_OpenSLRecorder_nativeRelease
  (JNIEnv *, jobject);

/*
 * Class:     com_darrenyuan_nativefeedback_OpenSLRecorder
 * Method:    nativeSetMicVolume
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_darrenyuan_nativefeedback_OpenSLRecorder_nativeSetMicVolume
  (JNIEnv *, jobject);

JNIEXPORT jboolean JNICALL
Java_com_darrenyuan_nativefeedback_OpenSLRecorder_createAudioRecorder(JNIEnv *env, jobject thiz);

JNIEXPORT void JNICALL
Java_com_darrenyuan_nativefeedback_OpenSLRecorder_startRecord(JNIEnv *env, jobject thiz);

JNIEXPORT void JNICALL
Java_com_darrenyuan_nativefeedback_OpenSLRecorder_shutDown(JNIEnv *env, jobject thiz);

extern "C"
JNIEXPORT void JNICALL
Java_com_darrenyuan_nativefeedback_OpenSLRecorder_stopRecord(JNIEnv *env, jobject thiz);

#ifdef __cplusplus
}
#endif
#endif