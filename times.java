import java.text.SimpleDateFormat;
import java.util.Date;

public class Clock {
    public static void main(String[] args) {
        while (true) {
            // 获取当前系统时间
            Date currentTime = new Date();
            SimpleDateFormat dateFormat = new SimpleDateFormat("yyyy/MM/dd HH:mm:ss");

            // 清屏（这里仅在终端中有效，对于IDE可能无效）
            System.out.print("\033[H\033[2J");
            System.out.flush();

            // 显示模拟斜体日期和时间
            System.out.println("当前日期: /" + dateFormat.format(currentTime) + "/");
            System.out.println("当前时间: /" + dateFormat.format(currentTime) + "/");

            try {
                // 暂停一秒钟
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
