void setup(string id)
{
    object from, to;

    if (!id || id == "")
    {
        write("ID不能为空，请重新输入：");
        input_to("setup");
    }
    else
    {
        from = this_object();
        to = new(USER_OB, id);
        exec(to, from);
        // destruct(from);
    }
}

void logon()
{
    write(read_file(MOTD));
    write("请输入你的ID：");
    input_to("setup");
}
