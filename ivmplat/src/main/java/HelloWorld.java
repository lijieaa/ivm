import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Platform;

import java.io.IOException;

public class HelloWorld {

    public interface MyC extends Library {
        MyC INSTANCE = (MyC) Native.loadLibrary("test", MyC.class);
        int sayHello(String str);
        String get_av_version_info();
    }


    public static void main(String[] args) throws IOException, InterruptedException {

        System.out.println(MyC.INSTANCE.get_av_version_info());
    }

}
