import random

# 生成一个随机数作为答案
answer = random.randint(1, 100)

# 设置初始猜测次数
guess_count = 0

print("欢迎参加猜数字游戏！")
print("我已经选择了一个1到100之间的随机数。")

while True:
    # 获取用户输入的猜测
    guess = int(input("请猜一个数字: "))
    guess_count += 1

    # 检查猜测是否正确
    if guess == answer:
        print(f"恭喜你，你猜对了！答案是{answer}。你用了{guess_count}次猜中了。")
        break
    elif guess < answer:
        print("太小了，请再试一次。")
    else:
        print("太大了，请再试一次。")
