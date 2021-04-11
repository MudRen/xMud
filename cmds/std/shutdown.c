int main(object me, string arg)
{
    shutdown(0);
    return 1;
}

int help(object me)
{
    write(@HELP
指令格式: shutdown

关闭游戏服务器。

HELP);
    return 1;
}
