package ywl5320.com.ffmpegpro;

import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;


import java.io.File;

public class MainActivity extends AppCompatActivity {
    final String mSavefilenamePrefix = "Downloads";
    //String mSavefilelocation;
    String mSavefileDir;
    private File mFileSaveFileDir;
    static int mSavefileCounter;
    final String mSavefileSurname = ".bmp";
    final String mSaveclipSurname = ".mp4";
    String mSavecliplocation;

    static {
        System.loadLibrary("FFmpegCall");
    }
    public native int combine_images_to_video(String infile_dir, String infile_prefix, String infile_surname, int total_frames,String outfile);


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


    }


}
