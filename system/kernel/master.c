#define ROOT_UID "Root"
#define BACKBONE_UID "Backbone"

string get_root_uid()
{
    return ROOT_UID;
}

string author_file(string file)
{
    debug_message("author_file : " + file);
    if (file == "/system/kernel/master")
    {
        return ROOT_UID;
    }

    return "xMud";
}

string get_bb_uid()
{
    return BACKBONE_UID;
}

string domain_file(string file)
{
    debug_message("domain_file : " + file);
    if (file == "/")
    {
        return ROOT_UID;
    }

    return "xMud";
}

string creator_file(string file)
{
    debug_message("creator_file : " + file);
    return "xMud";
}

object connect(int port)
{
    return new(LOGIN_OB);
}
