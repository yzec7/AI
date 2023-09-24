<!DOCTYPE html>
<html>
<head>
    <title>时钟</title>
</head>
<body>
    <h1>当前日期和时间：</h1>
    <?php
    date_default_timezone_set('Asia/Shanghai'); // 设置时区为上海
    echo date('Y-m-d H:i:s');
    ?>
</body>
</html>
