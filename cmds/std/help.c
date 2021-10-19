int main(object me, string arg)
{
    string file;

    if (!arg)
    {
        write(read_file(MOTD));
    }
    else if (file_size(file = "/cmds/std/" + arg + ".c") > 0 || file_size(file = "/cmds/test/" + arg + ".c") > 0)
    {
        notify_fail("有这个指令存在，但是并没有详细的说明文件。\n");
        return file->help();
    }

    return 1;
}
