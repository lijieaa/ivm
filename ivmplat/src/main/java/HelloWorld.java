import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Platform;

import java.io.IOException;

public class HelloWorld {

    public interface MyC extends Library {
        MyC INSTANCE = (MyC) Native.loadLibrary("test", MyC.class);
        int sayHello(String str);
    }


    public static void main(String[] args) throws IOException, InterruptedException {

        new Thread(new Runnable() {
            public void run() {
                int i = MyC.INSTANCE.sayHello("Hello, World\n");
            }
        }).start();

        Thread.sleep(1);
    }

}
