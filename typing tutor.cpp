#include <iostream>
#include<sys/time.h>
#include <string.h>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <windows.h>
#include <fstream>
using namespace std;


long timeInMicrosec()
{
    struct timeval start;
    gettimeofday(&start, NULL);
    return start.tv_sec*1000000 + start.tv_usec;
}

double lowercase(int l)
{
    vector<string> v1(5);
    v1[0]="maintained by a community of volunteer contributors using a wiki based";
    v1[1]="initially available only in english versions in other languages were ";
    v1[2]="time magazine stated that the opendoor policy of allowing any";
    v1[3]="biggest and perhaps the best encyclopedia in the world and";
    v1[4]="collaborative online encyclopedias were attempted before wikipedia but none were";
    srand(time(0));
    for(int i=0; i<v1.size(); i++)
    {
        int rand_index = rand()%v1.size();
        string temp = v1[i];
        v1[i] = v1[rand_index];
        v1[rand_index] = temp;
    }
    vector<string> v2(5);
    v2[0]="the domains wikipedia com and were registered on january  and january  respectively and wikipedia was launched on january lan ana  as a single english language  dfsf";
    v2[1]="controversial  sensitive or vandalism prone pages have been protected to varying degrees a frequently vandalized article can be semi protecte  orextended confirmed protected meaning that only";
    v2[2]="the broad term ancient history is not to be confused with classical antiquity the term classical antiquity is often used to refer to western history";
    v2[3]="most of what is known of the ancient world come from the accounts of antiquity own historians although it is important to take into account";
    v2[4]="east of the iranian world was the indus river valley civilization which organized cities neatly on grid patterns however the indus river valley civilization diminished ";
    srand(time(0));
    for(int i=0; i<v2.size(); i++)
    {
        int rand_index = rand()%v2.size();
        string temp = v2[i];
        v2[i] = v2[rand_index];
        v2[rand_index] = temp;
    }
    vector<string> v3(5);
    v3[0]="he bronze age forms part of the three age system it follows the neolithic age in some areas of the world in most areas of civilization bronze smelting became a foundation for more advanced societies there was some contrast with new world societies who often still preferred stone to metal";
    v3[1]="the beginning of the shang dynasty emerged in china in this period and there was evidence of a fully developed chinese writing system the shang dynasty is the first chinese regime recognized by western scholars though chinese historians insist that the xia dynasty preceded it the shang dynasty practiced forced ";
    v3[2]="the iron age is the last principal period in the three age system  preceded by the bronze age its date and context vary depending on the country or geographical region the iron age over all was characterized by the prevalent smelting of iron with ferrous metallurgy and the use of";
    v3[3]="philosophy religion and science were diverse in the hundred schools of thought producing thinkers such as confucius lao tzu and mozi during the sixth century bc similar trends emerged throughout eurasia in india with the rise of buddhism in the near east with zoroastrianism and judaism and in the west ";
    v3[4]="he axial age and its aftermath saw large wars and the formation of large empires that stretched beyond the limits of earlier iron age societies significant for the time was the persian achaemenid empire the empire vast territory extended from modern day egypt to xinjiang the empire legacy include the";
    srand(time(0));
    for(int i=0; i<v3.size(); i++)
    {
        int rand_index = rand()%v3.size();
        string temp = v3[i];
        v3[i] = v3[rand_index];
        v3[rand_index] = temp;
    }


    string s;
    if(l==1)
    {
        s=v1[0];
    }
    else if(l==2)
    {
        s=v2[0];
    }
    else
    {
        s=v3[0];
    }

    cout << s << endl;
    string input;
    long starttime = timeInMicrosec();
    getline(cin, input);
    long endtime = timeInMicrosec();
    long difference = endtime - starttime;
    long correct = 0, incorrect = 0;
    for(int i=0; i<input.size(); ++i)
    {
        if(input[i]==s[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
    double accuracy = ((double)correct/(double)input.size())*100;
    //1e6 == 10^6
    double cps = ((correct/(double)difference)*1e6);
    cout << "Your accuracy was:" << accuracy <<"%" <<endl;
    cout << "Your characters per second were:" << cps << endl;
    return accuracy;
}


double uppercase(int l)
{
    vector<string> v1(5);
    v1[0]="Maintained By A Community Of Volunteer Contributors Using A Wiki Based";
    v1[1]="Initially Available Only In English, Versions In Other Languages Were";
    v1[2]="Time Magazine Stated That The Open-door Policy Of Allowing Any";
    v1[3]="Biggest And Perhaps The Best Encyclopedia In The World And ";
    v1[4]="Collaborative Online Encyclopedias Were Attempted Before Wikipedia But None Were ";
    srand(time(0));
    for(int i=0; i<v1.size(); i++)
    {
        int rand_index = rand()%v1.size();
        string temp = v1[i];
        v1[i] = v1[rand_index];
        v1[rand_index] = temp;
    }
    vector<string> v2(5);
    v2[0]="The Domains Wikipedia Com And Were Registered On January  And January  Respectively And Wikipedia Was Launched On January Lan Ana  As A Single English Language  Dfsf";
    v2[1]="Controversial  Sensitive Or Vandalism Prone Pages Have Been Protected To Varying Degrees A Frequently Vandalized Article Can Be Semi Protecte  Orextended Confirmed Protected Meaning That Only";
    v2[2]="The Broad Term Ancient History Is Not To Be Confused With Classical Antiquity The Term Classical Antiquity Is Often Used To Refer To Western History";
    v2[3]="Most Of What Is Known Of The Ancient World Come From The Accounts Of Antiquity Own Historians Although It Is Important To Take Into Account ";
    v2[4]="East Of The Iranian World Was The Indus River Valley Civilization Which Organized Cities Neatly On Grid Patterns However The Indus River Valley Civilization Diminished";
    srand(time(0));
    for(int i=0; i<v2.size(); i++)
    {
        int rand_index = rand()%v2.size();
        string temp = v2[i];
        v2[i] = v2[rand_index];
        v2[rand_index] = temp;
    }
    vector<string> v3(5);
    v3[0]="He Bronze Age Forms Part Of The Three Age System It Follows The Neolithic Age In Some Areas Of The World In Most Areas Of Civilization Bronze Smelting Became A Foundation For More Advanced Societies There Was Some Contrast With New World Societies Who Often Still Preferred Stone To Metal";
    v3[1]="The Beginning Of The Shang Dynasty Emerged In China In This Period And There Was Evidence Of A Fully Developed Chinese Writing System The Shang Dynasty Is The First Chinese Regime Recognized By Western Scholars Though Chinese Historians Insist That The Xia Dynasty Preceded It The Shang Dynasty Practiced Forced";
    v3[2]="The Iron Age Is The Last Principal Period In The Three Age System  Preceded By The Bronze Age Its Date And Context Vary Depending On The Country Or Geographical Region The Iron Age Over All Was Characterized By The Prevalent Smelting Of Iron With Ferrous Metallurgy And The Use Of";
    v3[3]="Philosophy Religion And Science Were Diverse In The Hundred Schools Of Thought Producing Thinkers Such As Confucius Lao Tzu And Mozi During The Sixth Century Bc Similar Trends Emerged Throughout Eurasia In India With The Rise Of Buddhism In The Near East With Zoroastrianism And Judaism And In The West";
    v3[4]="He Axial Age And Its Aftermath Saw Large Wars And The Formation Of Large Empires That Stretched Beyond The Limits Of Earlier Iron Age Societies Significant For The Time Was The Persian Achaemenid Empire The Empire Vast Territory Extended From Modern Day Egypt To Xinjiang The Empire Legacy Include The";
    srand(time(0));
    for(int i=0; i<v3.size(); i++)
    {
        int rand_index = rand()%v3.size();
        string temp = v3[i];
        v3[i] = v3[rand_index];
        v3[rand_index] = temp;
    }
    string s;
    if(l==1)
    {
        s=v1[0];
    }
    else if(l==2)
    {
        s=v2[0];
    }
    else
    {
        s=v3[0];
    }
    cout << s << endl;
    string input;
    long starttime = timeInMicrosec();
    getline(cin, input);
    long endtime = timeInMicrosec();
    long difference = endtime - starttime;
    long correct = 0, incorrect = 0;
    for(int i=0; i<input.size(); ++i)
    {
        if(input[i]==s[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
    double accuracy = ((double)correct/(double)input.size())*100;
    //1e6 == 10^6
    double cps = ((correct/(double)difference)*1e6);
    cout << "Your accuracy was:" << accuracy <<"%" <<endl;
    cout << "Your characters per second were:" << cps << endl;
    return accuracy;
}



double numerical(int l)
{
    vector<string> v1(5);
    v1[0]="Look before face; 'only' 71 under, by: part real, go.";
    v1[1]="505 only 10 26 she become keep no during house!";
    v1[2]="Into ask call: back. 490 give, first own again.";
    v1[3]="Back we. For problem very develop 3 into, follow help. ";
    v1[4]="on by program 8591 year show. Which at if such";
    srand(time(0));
    for(int i=0; i<v1.size(); i++)
    {
        int rand_index = rand()%v1.size();
        string temp = v1[i];
        v1[i] = v1[rand_index];
        v1[rand_index] = temp;
    }
    vector<string> v2(5);
    v2[0]="first all no order down 'with' course find as: so, while form, each present first find, under lead. Another 4183 child those : 547 some new.";
    v2[1]="All with between these during must many large.  Life when into. too after when. Through general? On 8 'long' up 5 this all 'program' 5023";
    v2[2]="Again lead 'what' the. She just, still other get 65 any high open possible off 'people' go. but 52 9083 - do leave, any.";
    v2[3]="Ask general more 7878 year help (so) write great, 32 part! It  by they here however little. Come look. from before stand. Life govern plan.";
    v2[4]="Not general against well. great line! Now these school, fact lead do number any think few of general head through against feel. Program 3";
    srand(time(0));
    for(int i=0; i<v2.size(); i++)
    {
        int rand_index = rand()%v2.size();
        string temp = v2[i];
        v2[i] = v2[rand_index];
        v2[rand_index] = temp;
    }
    vector<string> v3(5);
    v3[0]="The Mughal Empire was founded by Babur (reigned 1526–1530), a Central Asian ruler who was descended from the Turco-Mongol conqueror Timur (the founder of the Timurid Empire) on his father's side, and from Genghis Khan on his mother's side. Ousted from his ancestral domains in Central Asia, Babur turned India.";
    v3[1]="The instability of the empire became evident under his son, Humayun (reigned 1530–1556), who was forced into exile in Persia by rebels. The Sur Empire (1540–1555), founded by Sher Shah Suri (reigned 1540–1545), briefly interrupted Mughal rule. Humayun's exile in Persia established diplomatic ties between the Safavid and Mughal Courts.";
    v3[2]="Jahangir (born Salim,reigned 1605–1627) was born to Akbar and his wife Mariam-uz-Zamani, an Indian Rajput princess.He was addicted to opium, neglected the affairs of the state, and came under the influence of rival court cliques. In contrast to Akbar, Jahangir came into conflict with religious leaders, notably the Sikh guru.";
    v3[3]="The Mughal Emperor Shah Alam II (1759–1806) made futile attempts to reverse the Mughal decline but ultimately had to seek the protection of the Emir of Afghanistan, Ahmed Shah Abdali, which led to the Third Battle of Panipat between the Maratha Empire and the Afghans (led by Abdali) in 1761.";
    v3[4]="Historians have offered numerous explanations for the rapid collapse of the Mughal Empire between 1707 and 1720, after a century of growth and prosperity. In fiscal terms, the throne lost the revenues needed to pay its chief officers, the emirs (nobles) and their entourages. The emperor lost authority, as the";
    srand(time(0));
    for(int i=0; i<v3.size(); i++)
    {
        int rand_index = rand()%v3.size();
        string temp = v3[i];
        v3[i] = v3[rand_index];
        v3[rand_index] = temp;
    }

    string s;
    if(l==1)
    {
        s=v1[0];
    }
    else if(l==2)
    {
        s=v2[0];
    }
    else
    {
        s=v3[0];
    }
    cout << s << endl;
    string input;
    long starttime = timeInMicrosec();
    getline(cin, input);
    long endtime = timeInMicrosec();
    long difference = endtime - starttime;
    long correct = 0, incorrect = 0;
    for(int i=0; i<input.size(); ++i)
    {
        if(input[i]==s[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
    double accuracy = ((double)correct/(double)input.size())*100;
    //1e6 == 10^6
    double cps = ((correct/(double)difference)*1e6);
    cout << "Your accuracy was:" << accuracy <<"%" <<endl;
    cout << "Your characters per second were:" << cps << endl;
    return accuracy;
}



double sp_character(int l)
{
    vector<string> v1(5);
    v1[0]="The modern study of history is wide-ranging, and includes the.";
    v1[1]="Their works continue to be read-today, and the gap Betweeen.";
    v1[2]="In East Asia, a state chronicle, the Spring and Autum.";
    v1[3]="The Greek word was 'borrowed' into Classical Latin as historia.";
    v1[4]="It was from Anglo-Norman that history was borrowed into Middle-English.";
    srand(time(0));
    for(int i=0; i<v1.size(); i++)
    {
        int rand_index = rand()%v1.size();
        string temp = v1[i];
        v1[i] = v1[rand_index];
        v1[rand_index] = temp;
    }
    vector<string> v2(5);
    v2[0]="History also includes the academic discipline which uses narrative to describe, examine, question, and analyze a sequence of past events, and investigate the patterns of";
    v2[1]="Historians seek to understand and represent the past through narratives. They often debate which narrative best explains an event, as well as the significance of.";
    v2[2]="Historians also debate the nature of history and its usefulness by discussing the 'study of the discipline' as an end in itself and as a.";
    v2[3]="Stories common to a particular culture, but not supported by external sources (such as the tales surrounding King Arthur), are usually classified as cultural heritage.";
    v2[4]="History differs from myth in that it is supported by evidence. However, ancient influences have helped spawn variant interpretations of the nature of history which.";
    srand(time(0));
    for(int i=0; i<v2.size(); i++)
    {
        int rand_index = rand()%v2.size();
        string temp = v2[i];
        v2[i] = v2[rand_index];
        v2[rand_index] = temp;
    }
    vector<string> v3(5);
    v3[0]="Historians write in the context of their own time, and with due regard to the current dominant ideas of how to interpret the past, and sometimes write to provide lessons for their own society. In the words of Benedetto Croce, 'All history is contemporary history'. History is facilitated by the.";
    v3[1]="All events that are remembered and preserved in some authentic form constitute the historical record. The task of historical discourse is to identify the sources which can most usefully contribute to the production of accurate accounts of past. Therefore, the constitution of the historian's archive is a result of circumscribing.";
    v3[2]="The study of history has sometimes been classified as part of the humanities and at other times as part of the social sciences. It can also be seen as a bridge between those two broad areas, incorporating methodologies from both. Some individual historians strongly support one or the other classification.";
    v3[3]="Traditionally, historians have recorded events of the past, either in writing or by passing on an oral tradition, and have attempted to answer historical questions through the study of written documents and oral accounts. From the beginning, historians have also used such sources as monuments, inscriptions, and pictures.";
    v3[4]="Archaeology is especially helpful in unearthing buried sites and objects, which contribute to the study of history. Archaeological finds rarely stand alone, with narrative sources complementing its discoveries. Archaeology's methodologies and approaches are independent from the field of history. 'Historical archaeology' is a specific branch of archaeology which often contrasts";
    srand(time(0));
    for(int i=0; i<v3.size(); i++)
    {
        int rand_index = rand()%v3.size();
        string temp = v3[i];
        v3[i] = v3[rand_index];
        v3[rand_index] = temp;
    }

    string s;
    if(l==1)
    {
        s=v1[0];
    }
    else if(l==2)
    {
        s=v2[0];
    }
    else
    {
        s=v3[0];
    }
    cout << s << endl;
    string input;
    long starttime = timeInMicrosec();
    getline(cin, input);
    long endtime = timeInMicrosec();
    long difference = endtime - starttime;
    long correct = 0, incorrect = 0;
    for(int i=0; i<input.size(); ++i)
    {
        if(input[i]==s[i])
        {
            correct++;
        }
        else
        {
            incorrect++;
        }
    }
    double accuracy = ((double)correct/(double)input.size())*100;
    //1e6 == 10^6
    double cps = ((correct/(double)difference)*1e6);
    cout << "Your accuracy was:" << accuracy <<"%" <<endl;
    cout << "Your characters per second were:" << cps << endl;
    return accuracy;
}


int main()
{
    system("Color 0A");
    ofstream myfile;
    myfile.open("HISTORY.txt", ios::app);
    if(!myfile)
    {
        cout<<"File not created.\n";
        exit(1);
    }
    cout << "Typing Test" << endl;
    int test_cases;
    string name;
    cout << "Please enter you name: \n";
    getline(cin, name);
    myfile<<name;
    cout << "How many tests would you like to attempt?" << endl;
    cin >> test_cases;
    cout << "Which type of text would you like to attempt the test on?\n" << endl;
    cout << "Press '1' for all lowercase text." << endl;
    cout << "Press '2' for lowercase and uppercase mixed text." << endl;
    cout << "Press '3' for text including special characters." << endl;
    cout << "Press '4' for text including numbers." << endl;
    int x;
    cin >> x;
    cout << "How long would yo like your test to be?" << endl;
    cout << "Press '1' for 10 words" << endl;
    cout << "Press '2' for 25 words" << endl;
    cout << "Press '3' for 50 words" << endl;
    int l;
    cin >> l;
    double accuracy_avg=0.0;
    double accuracy_return;
    int n = test_cases;
    cout << name<<" is attempting the test.\n";
    switch(x)
    {
    case 1:
        while(test_cases--)
        {
            fflush(stdin);
            accuracy_return = lowercase(l);
            accuracy_avg += accuracy_return;
            cout << "\n\n";
        }
        accuracy_avg=accuracy_avg/n;
        cout<<"The average accuracy is: "<<accuracy_avg<<"%";
        myfile <<" "<<accuracy_avg<<"\n";
        break;
    case 2:
        while(test_cases--)
        {
            fflush(stdin);
            accuracy_return = uppercase(l);
            accuracy_avg += accuracy_return;
            cout << "\n\n";
        }
        accuracy_avg=accuracy_avg/n;
        cout<<"The average accuracy is: "<<accuracy_avg<<"%";
        myfile <<" "<<accuracy_avg<<"\n";
        break;
    case 3:
        while(test_cases--)
        {
            fflush(stdin);
            accuracy_return = numerical(l);
            accuracy_avg += accuracy_return;
            cout << "\n\n";
        }
        accuracy_avg=accuracy_avg/n;
        cout<<"The average accuracy is: "<<accuracy_avg<<"%";
        myfile <<" "<<accuracy_avg<<"\n";
        break;
    case 4:
        while(test_cases--)
        {
            fflush(stdin);
            accuracy_return = sp_character(1);
            accuracy_avg += accuracy_return;
            cout << "\n\n";
        }
        accuracy_avg=accuracy_avg/n;
        cout<<"The average accuracy is: "<<accuracy_avg<<"%";
        myfile <<" "<<accuracy_avg<<"\n";
        break;
    }
    myfile.close();
}
