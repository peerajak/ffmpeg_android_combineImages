#ifndef _COMBINE_IMAGES_TO_VIDEO_
#define _COMBINE_IMAGES_TO_VIDEO_
extern "C"
{

int combine_images_to_video(const char *infile_dir, const char *infile_prefix,
                            const char *infile_surname, int total_frames, const char *outfile);
}
#endif

