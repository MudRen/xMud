#define ROOT_UID "root"
#define BACKBONE_UID "Backbone"

string get_root_uid()
{
    return ROOT_UID;
}

string author_file(string file)
{
    return file;
}

string get_bb_uid()
{
    return BACKBONE_UID;
}

string domain_file(string file)
{
    return file;
}

string creator_file(string file)
{
    return file;
}

object connect(int port)
{
    return new (LOGIN_OB);
}
