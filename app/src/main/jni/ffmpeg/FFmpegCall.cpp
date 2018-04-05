#include <jni.h>
#include "libcombine_images_to_video.h"



extern "C"
JNIEXPORT jint JNICALL
Java_ywl5320_com_ffmpegpro_MainActivity_combine_1images_1to_1video(JNIEnv *env, jobject instance,
                                                                   jstring infile_dir_,
                                                                   jstring infile_prefix_,
                                                                   jstring infile_surname_,
                                                                   jint total_frames,
                                                                   jstring outfile_) {
    const char *infile_dir = env->GetStringUTFChars(infile_dir_, 0);
    const char *infile_prefix = env->GetStringUTFChars(infile_prefix_, 0);
    const char *infile_surname = env->GetStringUTFChars(infile_surname_, 0);
    const char *outfile = env->GetStringUTFChars(outfile_, 0);

    jint ret = combine_images_to_video(infile_dir,  infile_prefix,  infile_surname, total_frames, outfile);



    env->ReleaseStringUTFChars(infile_dir_, infile_dir);
    env->ReleaseStringUTFChars(infile_prefix_, infile_prefix);
    env->ReleaseStringUTFChars(infile_surname_, infile_surname);
    env->ReleaseStringUTFChars(outfile_, outfile);
    return ret;
}