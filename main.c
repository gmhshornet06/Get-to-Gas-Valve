#include <kipr/botball.h>

int main()
{
    create_connect();
   	set_create_total_angle(0);
    while(abs(get_create_total_angle())<40)
    {
        create_drive_direct(-150,150);
        msleep(10);
    }   
    while(analog(0)<2600)
    {
        create_drive_direct(250,250);
        msleep(10);
    }
    while(abs(get_create_total_angle())<40)
    {
        create_drive_direct(-150,150);
        msleep(10);
    }   
    while(analog(0)<2600)
    {
        create_drive_direct(250,250);
        msleep(10);
    }
    create_stop();
    create_disconnect();   
    return 0;
}
