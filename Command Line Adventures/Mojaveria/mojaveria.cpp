#include <iostream>

int main() {

    std::cout << "\n\n";

    std::cout << "------------------------------------------------------------------------------------------------------------------\n";
    std::cout << "                                      Welcome to Mojaveria!\n";
    std::cout << "------------------------------------------------------------------------------------------------------------------\n\n\n";

    std::cout << "___________________________________________ SITUATION ____________________________________________________________\n\n";
    std::cout << "Your name is El Corpl John Flores, and you are a Mreen of Mojaveria. You were born near the white\n";
    std::cout << "and green mountain to the West of Mojaveria near Beartown but you have almost no memory of that place because\n";
    std::cout << "you were taken captive by the Mojaverians when you were about 6 years old. You spent your childhood\n";
    std::cout << "at the Boys Barracks just North of Bearmat Mountain where you learned to fight, learned to serve the King, and\n";
    std::cout << "became a Mreen. You have now been a Mreen for a few years and were just promoted to El Corpl. You are\n";
    std::cout << "being tasked with an important mission from Higher.\n\n";

    std::cout << "____________________________________________ MISSION _____________________________________________________________\n\n";
    std::cout << "Your mission is to traverse Mojaveria, find a missing holy relic, and return it to King Kernel.\n\n";
    std::cout << "Do you accept this mission, Mreen? [y/n] \n\n";
    
    char input0;

    std::cin >> input0;
    std::cout << "\n";

    if (input0 == 'y') {
        std::cout << "Great! Let's begin with some context before making your first choice...\n\n";

        std::cout << "You are currently located in McCag See, the seat of power of Mojaveria. \n";
        std::cout << "Specifically, you are standing in the heart of McCag See, across the Great\n";
        std::cout << "Lawn from King Kernal's palace. The Sacred Flag Pole proudly flies The Holy Colors\n";
        std::cout << "as a group of Shaplens face the Pole and salute to begin morning prayer.\n";
        std::cout << "Companies of Mreens march back and forth across the Great Lawn as they \n";
        std::cout << "chant along to the morning prayer.\n\n";
                
        std::cout << "A few miles to the Northwest of McCag See is the small village of Wilson\n";
        std::cout << "Camp. Wilson Camp is an outpost of McCag See that serves as a staging point\n";
        std::cout << "for raids into the Western Desert.\n\n";

        std::cout << "Directly to the North across the Bearmat Mountain lies the Old Weapons Range.\n";
        std::cout << "This range now serves as the primary defensive outpost to McCag See's North,\n";
        std::cout << "and is the key to venturing into the Delta Tee valley to the North, and\n";
        std::cout << "the Led Bullyon Mountains to the East. It is also home to the Boys Barracks, where\n";
        std::cout << "you grew up.\n\n";

        std::cout << "Now, the choice is yours. Where should we go first? [select]\n";
        std::cout << "   a) Wilson Camp\n";
        std::cout << "   b) Old Weapons Range\n\n";

        char input1;
        std::cin >> input1;
        std::cout << "\n";

        if (input1 == 'a') {
           
            std::cout << "You walk two hours along the old tank trail before reaching Wilson Camp\n\n";
            
            std::cout << "On your right is the old Camp Wilson. Each one of those rectangular ruins\n";
            std::cout << "in the dirt used to be a quonset hut back in the old Mreen Kore days.\n";
            std::cout << "On your left is Wilson Camp, which used to be an airfield. Let's head into\n";
            std::cout << "the Tock.\n\n";
            
            std::cout << "You enter a small tent next to the ruins of a large airplane\n\n";
            
            std::cout << "Inside the tent you see a Mreen Capten, likely the Tock Battle Capten. Maybe he's seen\n";
            std::cout << "the Kernel's holy relic.\n\n";
            std::cout << "What do you want to do? [select]\n";

            char input2;

            for (int i = 0; i < 3 && input2 != 'a' && input2 != 'b' && input2 != 'c'; i++) {

                std::cout << "   a) Ask the Capten if he's seen the missing relic.\n";
                std::cout << "   b) Look around the Tock for clues.\n";
                std::cout << "   c) Leave the tent.\n\n";
                std::cin >> input2;
                std::cout << "\n";

            }
            
            switch (input2) {

                case 'a':
                    std::cout << "You approach the Capten but before you can speak he barks out:\n\n";

                    std::cout << "'What are you doing Mreen!? Get back outside and into formation!'\n\n";
                    
                    std::cout << "Before you can react a tall Sarn't grabs you by the arm and pulls you\n";
                    std::cout << "outside and into the summer heat. He hands you a javlin and kay-bar and\n";
                    std::cout << "says 'Get back in line Mreen, we're 5 mikes out from stepping off!'\n\n";

                    std::cout << "You fall in line to a compny of Mreens and ask the Piefcee next to\n";
                    std::cout << "you what is going on.\n\n";

                    std::cout << "Piefcee: Don't you know, we're rucking to Flamingo today before raiding\n";
                    std::cout << "Rimrock tomorrow or the next. After that we'll hit Pioneer Town or maybe even\n";
                    std::cout << "Yucca. I hope we go to Yucca, I've never been to the big town before. I hear\n";
                    std::cout << "they have good water and even some ice from Big Bear in the winter time.\n\n";

                    std::cout << "But I'm on a mission to find lost holy relics, I can't go!\n\n";

                    std::cout << "A nearby Corpl responds.\n\n";

                    std::cout << "Corpl: Stop making shit up to get out of this raiding op. It is every Mreen's\n";
                    std::cout << "duty to raid and fight for Mojaveria.\n\n";
                    
                    std::cout << "What do you want to do? [select]\n";

                    std::cout << "   a) Join the Raiders and pursue glory through combat.\n";
                    std::cout << "   b) Refuse to join, adament that your mission for King Kernal is real and is the priority.\n\n";

                    char input3; 
                    std::cin >> input3;
                    std::cout << "\n";

                    if (input3 == 'a') {
                        std::cout << "You're right, it's my duty.\n\n";

                        std::cout << "Corpl: KILL! Strength & Honor Mreen.\n\n";

                        std::cout << "You spend the next week raiding small villages across the Western Desert, moving\n";
                        std::cout << "at night, raiding in the day, and consolidating water and diesel taken from the enemy.\n\n";

                        std::cout << "On the last day of the raid, Capten Rosales makes you Pointman - a high honor for any\n";
                        std::cout << "young Mreen. As you lead the Raiders into Yucca, an enemy sword finds its mark high on\n";
                        std::cout << "your right arm. Your javlin arm gone, you draw your kay-bar with your left and rush into the\n";
                        std::cout << "throng of Yuccan militia, taking one or two more before dying in glorious service to Mojaveria.\n\n";
                        return 0;
                    }
                    else if (input3 == 'b') {
                        std::cout << "No I have an important mission for King Kernal! I am leaving - NOW!\n\n";
                        
                        std::cout << "Corpl: Your refusal to join us Raiders is an act of treason!\n";
                        std::cout << "Mreens, ATTACK THIS TRAITOR!\n\n";

                        std::cout << "The Corpl launches for you as he draws his kay-bar and tries to grab your arm.\n";
                        std::cout << "The Piefcee next to you grabs you by the collar and plunges his kay-bar\n";
                        std::cout << "high into your torso. As the air leaves your lung you feel the 'ffwHAP' of\n";
                        std::cout << "a javlin hitting your stomach before lodging into the front of your spine.\n\n";

                        std::cout << "After you bleed out, the Mreens strip you of the brass E-G-A hanging around your\n";
                        std::cout << "neck and leave your body for the desert.\n\n";
                        return 0;
                    }
                    else {
                        std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                        return 0;
                    }
                
                case 'b':
                    std::cout << "You walk around the Tock looking for any clues. Capten Rosales is busy at the sand table walking\n";
                    std::cout << "through the plan for some Op with his Platoon Loots and their Gunnys.\n\n";

                    std::cout << "In one corner you see a hand-drawn map of Mojaveria. You understand the shapes and symbols on the map\n";
                    std::cout << "but ask a nearby Sarn't to read the text of the map for you since you don't yet rate the reading POI.\n\n";

                    std::cout << "Sarn't: The words you see are the place names on the map of Mojaveria. We're located here at Wilson Camp.\n";
                    std::cout << "Hidalgo City and the Quack are located to our Northwest. Back Southeast is McCag See. The Western edge of\n";
                    std::cout << "Mojeveria is the Johnson Valley territory. To the North is 40 Highway (an old world road running East\n";
                    std::cout << "to West) this is our border with the Irwins. Our Southern border is the frontrange of the Joshua Tree Park\n";
                    std::cout << "mountains, and our Eastern boundary is the South-North valley running from the big bend in the 62 highway\n";
                    std::cout << "up to the salt strip mines and black mountain near Amboy. Pray you never have to go out to Amboy... creepy\n";
                    std::cout << "place.\n\n";

                    std::cout << "You study the map interestingly and are awed by the size of the paper it is drawn on -- you've never seen\n";
                    std::cout << "such a large piece of new world paper before.\n\n";

                    std::cout << "You spot a small piece of old world paper tacked onto the map next to Hidalgo City with tiny handwriting\n";
                    std::cout << "on it. You ask the Sarn't to read it for you.\n\n";

                    std::cout << "Sarn't: This says, 'Irwin raiders hit Hidalgo from West. 10 friendly KIA & 5 POW. EN egress North into the Quack.\n";
                    std::cout << "EN captured holy relic from Basilone Shrine.'\n\n";

                    std::cout << "What do you want to do? [select]\n";

                    char input4;
                    
                    for (int i = 0; i < 3 && input4 != 'a' && input4 != 'b'; i++) {

                        std::cout << "   a) Wait for Capten Rosales to finish his brief and then ask him about the note.\n";
                        std::cout << "   b) Leave the tent and head to Hidalgo City.\n\n";
                        std::cin >> input4;
                        std::cout << "\n";

                    }
                    
                    switch (input4) {

                        case 'a':
                            std::cout << "Good afternoon sir, I am on a mission at the personal direction of King Kernal to recover a most\n";
                            std::cout << "holy relic of the old Kore. I have some questions for you.\n\n";

                            std::cout << "Capten Rosales: Very well devil dog, what've you got?\n\n";

                            std::cout << "I've been tasked with finding a missing holy relic, and I noticed this piece of paper\n";
                            std::cout << "on the map... how long ago was this Irwin raid?\n\n";

                            std::cout << "Capten Rosales: We had a runner from Hidalgo get here this morning with the note. It's from\n";
                            std::cout << "Capten Medina, he's the garrison CO for Hidalgo. That raid likely happened late last night.\n";
                            std::cout << "Those Irwin sodders have been stepping up raids in Mojaveria in the last month. Don't worry\n";
                            std::cout << "though, I'm sure Capten Medina has a good plan for retribution. I can't talk anymore though...\n";
                            std::cout << "Me and my boys are stepping off now for raids into the Western Desert. I'm hoping to bump into\n";
                            std::cout << "those Irwins in the event their egress North was a feint and they looped back around South.\n";
                            std::cout << "In any case, good luck Mreen. Take this with you and deliver it to Medina. Challenge and\n";
                            std::cout << "pass this week is 'Alabama' -- 'Moonshine'. Don't ask me what that means.\n\n";

                            std::cout << "Capten Rosales hands you a heavy satchell. You click your sandals together and salute, saying\n";
                            std::cout << "'Aye Sir.' Capten Rosales returns the salute and disappears out of the tent.\n\n";

                            std::cout << "As you leave the tent you see Capten Rosales mounted on his horse. He draws his Mameluke and marches\n";
                            std::cout << "the Compny off into the desert. A sizeable dust trail kicks up and clouds the tent in fine\n";
                            std::cout << "Mojave moondust. You wait for the dust to clear and head Northwest to Hidalgo City.\n\n";

                            std::cout << "After six hours of walking you finally reach Fort Hidalgo City, just before EENT. Inside the gate to\n";
                            std::cout << "the fort, you are greeted by Capten Medina, who hands you a canteen.\n\n";

                            std::cout << "Capten Medina: I saw you coming through my binos. I assumed Rosales sent you seeing as you've.\n";
                            std::cout << "got that satchel. What have you got for me?\n\n";

                            std::cout << "Just this satchel sir. I'm just the runner so I didn't look inside.\n\n";

                            std::cout << "Capten Medina: Good man. But if you made it this far without looking, I don't mind showing you\n";
                            std::cout << "what you've been carrying halfway across West Mojaveria.\n\n";

                            std::cout << "Medina opens the satchel and pulls out a kind of heavy round ball wrapped in tunic clothe. As he\n";
                            std::cout << "unwraps the ball your mind registers the familiar pale skin and gaunt demeanor of a severed head.\n\n";
                            
                            std::cout << "Capten Medina: Here he is... the former Irwin Prince Jackson. We captured him on a raid earlier this\n";
                            std::cout << "month... we found him and his war band near Lavic Lake en route to the Quack. He was brought all\n";
                            std::cout << "the way back to King Kernal. The Kernel wanted to show him the might of Mojaveria before his\n";
                            std::cout << "execution. He never bemoaned his capture and thanked the Kernal for his hospitality before his beheading.\n"; 
                            std::cout << "Brave man and good combat leader... glad he's taken out of the fight though. His head\n";
                            std::cout << "will be returned to King Blackhorse the next time we encounter an Irwin party. Even though\n";
                            std::cout << "we're at war with them, we give them their due respect as a worthy enemy... not like those fat hordes\n";
                            std::cout << "of bread eating masses in the far west along the coast. Anyway, what are you doing here Mreen?\n\n";

                            std::cout << "Well sir, I'm stationed at McCag See and was given the mission of finding a lost relic.\n\n";

                            std::cout << "Capten Medina: Good shit devil dog. We lost our Basilone Shrine relic in an Irwin raid last night.\n";
                            std::cout << "Go rest up in the barracks tent over there, one of the females will make sure you're fed and taken\n";
                            std::cout << "care of. You can step off with our war band tomorrow morning. We're going out hunting for our relic.\n\n";

                            std::cout << "What do you want to do now? [select]\n";

                            char input5; 

                            for (int i = 0; i < 3 && input5 != 'a' && input5 != 'b' && input5 != 'c'; i++) {

                                std::cout << "   a) Pray at the Fort Hidalgo City shrine.\n";
                                std::cout << "   b) Walk to the barracks and go to bed.\n";
                                std::cout << "   c) Leave the Fort immediately and head North into the Quack.\n\n";
                                std::cin >> input5;
                                std::cout << "\n";

                            }
                            
                            switch(input5) {

                                case 'a':
                                    std::cout << "You walk around the fort until you find the Basilone Shrine. As you approach you seee a few\n";
                                    std::cout << "Mreens kneeling in prayer. The stone inscription under a hand drawn image reads: 'Saint Basil,\n";
                                    std::cout << "the lone survivor of the Battle of Japan. Killed ten thousand men with the holy machine gun in the\n";
                                    std::cout << "service to the old Kore. Patron Saint of Violence. Died raising the Holy Colors in battle at Eewoah.\n\n";

                                    std::cout << "You take the woven palm leaf cover off of your head and remove your brass E-G-A necklace. You\n";
                                    std::cout << "kiss the brass insignia before touching it to the top of the shrine. There is a noticable gap where\n";
                                    std::cout << "you assume the holy relic used to be. After kneeling down to begin prayer you raise your right arm\n";
                                    std::cout << "in a salute and start the evening prayer:\n\n";

                                    std::cout << "        From the halls of McCag See, to the shores of Californya\n";
                                    std::cout << "        We will fight our country's battles in the hills of sand and stone\n";
                                    std::cout << "        First to fight for King and brothers, and to keep our weapons red\n";
                                    std::cout << "        We are proud to claim the title of Mojaveria Mreen.\n\n";

                                    std::cout << "You cut your salute, stand up, and walk towards the barracks tent. Inside you check in with\n";
                                    std::cout << "the Saler serving as the barracks orderly. She points to an empty space on the ground and\n";
                                    std::cout << "hands you a canteen and coarse horse blanket. After a short time you fall asleep.\n\n";

                                    std::cout << "In the morning you fall in with Capten Medina's war band. You move North through the ruins\n";
                                    std::cout << "of the old mount town before cresting a small ridge. Before you is a long and wide valley -\n";
                                    std::cout << "the Quack. In the middle of the Quack you see a rocky hill feature - the Gator.\n\n";

                                    std::cout << "By mid morning you and the band reach the South side of the Gator.\n\n";
                                    break;
                                    break;
                                
                                case 'b':
                                    std::cout << "You walk directly towards the barracks tent and check in with the female Saler inside.\n";
                                    std::cout << "She is the barracks orderly and points to an empty space on the ground. After she hands\n";
                                    std::cout << "you a canteen and a coarse horse blanket, you fall asleep.\n\n";

                                    std::cout << "In the morning you fall in with Capten Medina's war band. You move North through the ruins\n";
                                    std::cout << "of the old mount town before cresting a small ridge. Before you is a long and wide valley -\n";
                                    std::cout << "the Quack. In the middle of the Quack you see a rocky hill feature - the Gator.\n\n";

                                    std::cout << "By mid morning you and the band reach the South side of the Gator.\n\n";
                                    break;
                                
                                case 'c':
                                    std::cout << "You wait for Capten Medina to leave and depart out of the fort. You head to the northern\n";
                                    std::cout << "edge of the old mount town surrounding the fort and climb to the crest of the small\n";
                                    std::cout << "terrain feature there. It is now dark as you stand looking North into the Quack.\n";
                                    std::cout << "Several miles to the North just before the next mountain range you see the small\n";
                                    std::cout << "red dot of a war band fire - Irwins.\n\n";
                                    
                                    std::cout << "You descend into the Quack alone.\n\n";

                                    std::cout << "By midnight you reach the Gator, a small hilly feature in the middle of the Quack, and\n";
                                    std::cout << "slowly crest the top of the hill. You still see the Irwin fire at the far end of the Quack.\n\n";

                                    std::cout << "Suddenly, you hear movement behind you. There is enough illum from the moon to see four\n";
                                    std::cout << "men approaching you. Each points his javlin at you - eyeing you with fearsome intensity.\n\n";
                                    
                                    std::cout << "Your mind flashes 'Enemey' quickly across your consciousness as you throw yourself down the\n";
                                    std::cout << "North side of the Gator, tumbling down its steep slope and creating a massive dust cloud.\n\n";

                                    std::cout << "At the bottom of the Gator you sprint towards the East side of the Quack valley. After several minutes\n";
                                    std::cout << "of running you lay flat on the earth in a micro-draw and try hard to supress your breath so you can hear\n";
                                    std::cout << "where the Irwins are.\n\n";

                                    std::cout << "You lay in the draw for hours until sunlight - no sight of the Irwin war band.\n\n";

                                    std::cout << "By mid-morning, when you are satisfied that the Irwins are not near, you slowly make your way up\n";
                                    std::cout << "the steep rocky East side of the valley. Once you've reached a high point, you spot a dust trail\n";
                                    std::cout << "from the South - likely Capten Medina's band. You move back to the Gator and wait for their arrival.\n\n";

                                    std::cout << "After a successful link-up with Medina's band you fall in and continue with the group.\n";
                                    std::cout << "You explain the previous night's events to the Capten... he quickly chastistes you for your\n";
                                    std::cout << "stupidity before cracking a wide smile and saying, 'You're may be a dumb one, but the dumb & tough Mreens\n";
                                    std::cout << "always make the best field Mreens, and that's where it counts.' You hide your smile and continue on.\n\n";
                                    break;

                                default:
                                    std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                                    return 0;

                            
                            }
                            std::cout << "Capten Medina: Alright boys, I've got to make a decision on the route. The Irwins could have easily gone\n";
                            std::cout << "North through the pass into Lavic toward 40 Highway, or could have gone West into the Johnson Valley\n";
                            std::cout << "territory before shooting North to 40. Let's start with you young blood. Which way should we go?\n\n";

                            std::cout << "[select]\n";
                            
                            char input6;

                            for (int i = 0; i < 3 && input6 != 'a' && i != 'b' && input6 != 'c'; i++) {

                                std::cout << "   a) Johnson Valley Territory\n";
                                std::cout << "   b) Lavic Lake\n";
                                std::cout << "   c) Suggest going East into the Delta Tee valley.\n\n";
                                std::cin >> input6;
                                std::cout << "\n";

                            }

                            switch (input6) {

                                case 'a':
                                    std::cout << "Sir, I think we should go West into Johnson. That's the fastest way to Irwin I think\n";
                                    std::cout << "It's their most likely koe-uh.\n\n";

                                    std::cout << "Capten Medina: That's what I was thinking too. Johnson it is.\n\n";

                                    std::cout << "You spend the next 5 days with the war band moving through the empty Johnson Valley territory\n";
                                    std::cout << "searching for signs of the Irwins. Upon arrival to 40 Highway - the tentative boundary between\n";
                                    std::cout << "Mojaveria and Irwin - your band moves East to Lavic Lake, before moving down South back into.\n";
                                    std::cout << "the Quack and further on back into Fort Hidalgo City.\n\n";
                                    break;
                                
                                case 'b':
                                    std::cout << "Sir, I think we should go North into Lavic. They probably don't want to take a direct route back to Irwin\n";
                                    std::cout << "(Johnson Valley) because we'll be expecting that. I think Lavic is their most likely koe-uh.\n\n";

                                    std::cout << "Capten Medina: That's what I was thinking too. Lavic it is.\n\n";

                                    std::cout << "You spend the next 5 days with the war band moving through Lavic Lake before heading West along 40\n";
                                    std::cout << "Highway  - the tentative boundary between Mojaveria and Irwin - searching for signs of the Irwins.\n";
                                    std::cout << "After walking along the Highway for some time, your band moves South down into Johnson before moving\n";
                                    std::cout << "East back into the Quack and further on back into Fort Hidalgo City.\n\n";
                                    break;
                                
                                case 'c':
                                    std::cout << "Option C not yet built.\n"; //DRVercher 20240105
                                    /*
                                    This section of the story is about your choice to head with Medina's party East into Delta Tee. There you spot the
                                    Irwin raiders en route to linking up with a much larger Irwin main body right at the Tee. Your small party
                                    surprises the Irwin raiders, killing all after taking back the holy relic (a 240 spare barrel) and learning from
                                    their leader that the Irwin main body is being led by King Blackhorse himself. 

                                    You have the decision (really it's Capten Medina's, but for gameplay your input is what matters) to:
                                        a) Follow the main body until night fall, then surprise the EN with a night raid that results in capture of the Irwin King.
                                           He is taken back as prisoner to McCag See where King Kernal executes him. You and everyone in the group are
                                           awarded Nams-with-Vees - the highest valor award in Mojaveria. Game ends.
                                        b) Attack the main body now. Speed, surprise, and violence of action give your group early gains in the fight - at one point
                                            capturing King Blackhorse - but eventually you are all captured. Capten Medina is tortured and executed and the rest of you
                                            are taken to Irwintown to be slaves. Game ends.
                                    */
                                    return 0;
                                
                                default:
                                    std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                                    return 0;
                            }
                            std::cout << "Back inside Hidalgo your party is greeted sadly by Salers in mourning and vengeful Mreens - though the slaves\n";
                            std::cout << "look on inpartially. A Loot - likely the Hidalgo XO - walks up to Capten Medina and delivers the news.\n\n";

                            std::cout << "Hidalgo XO: Sir, while you were gone McCag See was raided by a large force of Irwins. King Blackhorse\n";
                            std::cout << "himself led the party. The Kernal's gone... they took him to Irwin. They came from Amboy and the Led\n";
                            std::cout << "Bullyons before cutting over through Cleghorn.\n\n";

                            std::cout << "As you tear up hearing the news you watch as Capten Medina becomes enraged for a moment before cooling himself.\n\n";
                                    
                            std::cout << "Capten Medina: Boys, we're getting the Kernal - NOW!\n\n";

                            std::cout << "All 400 Mreens of Hidalgo grab javlins and mount up. The Salers bid their men farewell - each knowing that\n";
                            std::cout << "their Mreen may not come back but satisfied that their memory will live on if they die gloriously in combat.\n";
                            std::cout << "The children of the Fort race after the large war party as they leave the gates - whooping and screaming as\n";
                            std::cout << "the men take off towards Irwin.\n\n";

                            std::cout << "After a few hard dies of riding, you arrive at a large dry lake bed in the heart of Irwin a dozen miles to the South\n";
                            std::cout << "of King Blackhorse's palace. You are greeted by a sizeable group of Irwin men headed by a royal guidon.\n";
                            std::cout << "As the Irwin group nears you understand the lead man to be some kind of Irwin prince. He is pale and portly as he rides\n";
                            std::cout << "up with his entourage to Capten Medina - looking to talk.\n\n";

                            std::cout << "Irwin Prince: Hooah Mojave Capten... I am Prince Smith. Welcome to Irwin, home of the Blackhorse Dynasty.\n";
                            std::cout << "I suppose you're here for your Kernal. He's up at the palace now, cowering inside our brigg - alive at the\n";
                            std::cout << "pleasure of my father, King Blackhorse IX.\n\n";

                            std::cout << "Capten Medina: Why should I not slay you here now?\n\n";

                            std::cout << "Prince Smith: I offer you a trade... Your men have captured my brother, Prince Jackson, some few weeks ago.\n";
                            std::cout << "My father will return your Kernal, unharmed, if Prince Jackson is freed and returned to us.\n\n";
                                    
                            std::cout << "Capten Medina starts to reach for the satchell in his saddle bag as he begins speaking.\n\n";

                            std::cout << "I knew your brother - a worthy enemy in the field & a fearsome warrior. I fought him more than once over these past\n";
                            std::cout << "12 months of war. A true warrior, which is not very common for Irwin sodders. Tell me, why have I not seen you\n";
                            std::cout << "in the field during this war? Too busy getting fat in the barracks?\n\n";

                            std::cout << "Prince Smith [frustrated]: I am the heir! I must learn to manage the entire kingdom not just fight desert\n";
                            std::cout << "cults like Mojaveria! I will be King one day!!\n\n";

                            std::cout << "Capten Medina calmly unsheaths his captured Irwin cav-sayber - causing unease within the Irwin entourage. He rides up close\n";
                            std::cout << "to Prince Smith, hands him the cav-sayber, and gives him the unopened satchel saying,\n\n";
                                    
                            std::cout << "Capten Medina: Bury him with this, it was his. Tell your father that Prince Jackson has the respect of Mojaveria and will\n";
                            std::cout << "be remembered in our songs as a valiant and worthy foe. Tell him also to return our Kernal by dawn tomorrow to us here.\n";
                            std::cout << "If not, we will attack with our 400 and will topple the Blackhorse Dynasty by midday.\n\n";

                            std::cout << "Prince Smith slowly opens the satchel but throws it down in shock when seeing the dead eyes of his brother. An Irwin\n";
                            std::cout << "orderly hurries to pick it up.\n\n";
                                    
                            std::cout << "Prince Smith: I-I c-can't... ask my father for that!\n\n";

                            std::cout << "Capten Medina: Do it.\n\n";

                            std::cout << "Capten Medina turns his horse towards the fingers and draws of the nearby mountains to the Southwest of the dry lake.\n";
                            std::cout << "The war band follows. Prince Smith is frozen watching the dust clouds kick up. Finally, his orderly asks for his orders.\n\n";

                            std::cout << "Prince Smith: We return to the palace... my father will know what to do...\n\n";

                            std::cout << "[The next morning, two hours before dawn]\n\n";

                            std::cout << "Capten Medina: I need a Mreen to set up an ohpy up on the mountain behind us. Any volunteers?\n\n";

                            std::cout << "[select]\n";

                            char input7;

                            for (int i = 0; i < 3 && input7 != 'a' && input7 != 'b'; i++) {

                                std::cout << "   a) Volunteer for the ohpy.\n";
                                std::cout << "   b) Do nothing & hope someone else volunteers.\n\n";
                                std::cin >> input7;
                                std::cout << "\n";

                            }
                            switch (input7) {

                                case 'a':
                                    std::cout << "You jump at the chance to do important scouting and run over to Capten Medina.\n";
                                    std::cout << "Sir, I volunteer. I want to scout.\n\n";
                                    break;
                                
                                case 'b':
                                    std::cout << "A few brief moments pass with no volunteers. A nearby Staf-Sarn't volunteers. Your Corple whacks you unexpectedly\n\n";
                                    std::cout << "with the stick of his lance across your back.\n\n";

                                    std::cout << "Hey Mreen, why does a Staf-Sarn't have to volunteer for a junior Mreen's job? Go tell the Sir you're on the ohpy.\n\n";

                                    std::cout << "You internally ask yourself why he also didn't volunteer as you hide the stinging pain from your face and run over to Capten Medina.\n\n";
                                    
                                    std::cout << "Sir, I volunteer!\n\n";
                                    break;
                                
                                default:
                                    std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                                    return 0;
                            }    
                            std::cout << "Capten Medina: Very well, take my binos. Get high enough where you can get good viz North-Northeast towards Irwintown,\n";
                            std::cout << "that's where the Blackhorse palace is. Make sure you keep your eyes on the gap in the mountains to the North-Northwest\n";
                            std::cout << "and to the far Northeast and East. If they come down the Irwintown road (North-Northeast) there's less chance they're coming\n";
                            std::cout << "for a fight. If they come from the gaps in the mountains left or right of that road, we're fighting. In any case\n";
                            std::cout << "you're my eyes up at the ohpy.\n\n";

                            std::cout << "Capten Medina: Color Sarn't! Get this Mreen the scout drum and the compny colors.\n\n";

                            std::cout << "The Sarn't hands you a small animal hide drum and wood mallet.\n\n";

                            std::cout << "Capten Medina: When you see them, no matter from where, you beat this drum and you don't stop until you hear the response\n";
                            std::cout << "from the compny drum down here. While you're drumming, you point the guidon in the direction they're approaching from.\n";
                            std::cout << "Keep the colors hidden until its time to signal. Got it?\n\n";
                            
                            std::cout << "Yes sir.\n\n";

                            std::cout << "Capten Medina: Good. You've proven yourself a good young Mreen so far. I know you won't let the Compny down.\n\n";

                            std::cout << "You climb halfway up the mountain to the compny's rear and set up your ohpy.\n\n";

                            std::cout << "Right after BMNT, you see a dust cloud in the distance - the Irwins.\n\n";
                            std::cout << "Where do you see the clouds coming from? [select]\n";

                            char input8;

                            for (int i = 0; i < 3 && input8 != 'a' && input8 != 'b' && input8 != 'c'; i++) {

                                std::cout << "   a) You see dust clouds from the North-Northwest.\n";
                                std::cout << "   b) You see dust clouds from the far East.\n";
                                std::cout << "   c) You see dust clouds from the Irwintown road (Northeast)\n\n";
                                std::cin >> input8;
                                std::cout << "\n";

                            }
                            
                            switch (input8) {

                                case 'a':
                                    std::cout << "This option not yet built.\n"; //DRVercher 20240105
                                    /*
                                    This choice results in Prince Smith leading a smaller force (maybe 100 men) into battle against Medina. Though once Smith's men
                                    see the size of Medina's forces, most abandon him, realizing that Smith lied to them about the size of Medina's force. A very small
                                    handful (maybe 5-10) men loyal to Smith (open-secret male lover, orderlies, courtiers, etc.) continue with him as they descend into the bowl
                                    and meet Medina. Medina and Smith converse. Smithis trying to prove to Medina that he is capable of leading men into combat (he thinks
                                    what he is doing is combat and demands to fight Medina). Medina soundly ridicules him and captures Smith and his followers rather than kill them.
                                    
                                    Meanwhile, a royal Irwin procession is seen coming down the Irwintown road towards the salt flats.
                                    */
                                    return 0;
                                
                                case 'b':
                                    std::cout << "This option not yet built.\n"; //DRVercher 20240105
                                    /*
                                    This choice results in Medina's forces racing across the salt flat to meet the distant enemy to the East. When they are closer
                                    Medina realizes that this is a very large Mojaverian force, led by Major Ramos (McCag See XO aka chief advisor to the Kernal).
                                    You join forces and and turn north towards Irwintown road. The massive show of force is met with a royal Irwin procession.
                                    */
                                    break;
                                
                                case 'c':
                                    std::cout << "This option not yet built.\n"; //DRVercher 20240105
                                    /*
                                    This choice results seeing a large royal Irwin procession coming down the Irwintown road towards the salt flat.
                                    */
                                    break;
                                
                                default:
                                    std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                                    return 0;
                            }
                            /*
                            This thread picks up here // DRVercher 20240105

                            The royal procession, led by the Irwin King (Blackhorse XI), delivers King Kernal (alive, well fed, unharmed/un-tortured)
                            to Capten Medina. King Blackhorse commends Medina for his courage, combat leadership, and for the return of Prince
                            Jackson's head and royal cav-sayber. Blackhorse and Kernal announce to both forces that Irwin and Mojaveria are no longer at war.
                            After a few days togeter, the Kings have decided that their peoples have more in common than not. Both are warrior tribes
                            made strong by hard lives in the desert. Somehow mention that Irwin and Mojaveria are going to team up for a sequel game where
                            they raid and subjugate the 'fat bread-eaters' of the western coast... becoming a new empire owning all of current day greater LA,
                            all the way South to line inbetween San Clemente to Temecula (advance stopped by 'Marines' from Camp Pendleton... they have their
                            own kingdom and control San Diego/Tijuana).
                            */
                            std::cout << "Temp ending.\n\n"; // DRVercher 20240105
                            return 0;

                        case 'b':
                            std::cout << "You spend a few more minutes studying the map before noticing the officers and Gunnys leaving the\n";
                            std::cout << "tent. You follow them out and see the compny formed up ready to step off. Capten Rosales mounts his\n";
                            std::cout << "horse, draws his Mameluke and marches the Compny off into the desert. A sizeable dust trail kicks\n";
                            std::cout << "up and clouds the tent in fine Mojave moondust. You wait for the dust to clear and head Northwest\n";
                            std::cout << "to Hidalgo City.\n\n";

                            std::cout << "After six hours of walking you finally reach Fort Hidalgo City, just before EENT. At the gate you are\n";
                            std::cout << "roughly greeted by the guards.\n\n";

                            std::cout << "Mreen Guard: Halt, who goes there?\n\n";

                            std::cout << "I'm a Mreen from McCag See on a mission for the King.\n\n";

                            std::cout << "Mreen Guard: Alabama\n\n";
                            
                            std::cout << "You look on at the Guards confused... you've never heard of Alabama before.\n\n";

                            std::cout << "Mreen Guard: Listen dumbfuck, that's the challenge word this week... don't you know? You're supposed\n";
                            std::cout << "to respond with the pass word. Do you know this week's challenge and pass?\n\n";

                            std::cout << "Umm... no?\n\n";

                            std::cout << "One guard points his javlin at your chest while the other two move to both of your sides. The main Guard\n";
                            std::cout << "grabs you with both hands and throws you down into the sand. He forces your hands behind your back\n";
                            std::cout << "and ties them roughly with rope. Another guard starts beating you until your face spurts blood across\n";
                            std::cout << "his tunic. The last thing you hear before blacking out is, 'Moonshine... the pass word is Moonshine.'\n\n";

                            std::cout << "You wake up the next morning in the Hidalgo stockade. Capten Medina is called over when you awake and\n";
                            std::cout << "asks you who you are.\n\n";

                            std::cout << "Sir, I'm from McCag See - I've been sent to help find a lost holy relic.\n\n";
                            
                            std::cout << "Capten Medina: Young blood, why the fuck did you not know the challenge and pass then? One of my boys\n";
                            std::cout << "could have killed you walking up on the gate at dusk not knowing like that... they showed good\n";
                            std::cout << "restraint not ending you last night. You could have been an Irwin spy for all we knew. Anyway,\n";
                            std::cout << "I'm taking a small war band into the Quack this morning to try and find the Irwins that took\n";
                            std::cout << "our Basilone Shrine relic. I don't trust you'll be competent enough to come with us, so rest up\n";
                            std::cout << "here in the stockade until we get back. I'll make sure one of the females in the fort gets you enough\n";
                            std::cout << "food and water to survive the week until we're back.\n\n";

                            std::cout << "You watch from the stockades as Capten Medina walks up to a Saler and converses for a moment with her before\n";
                            std::cout << "walking away to his war band. He returns the salute of the Mreens in the group, shakes hands with the Gunny,\n";
                            std::cout << "and orders the men to mount their horses. The gate of the fort opens and the Capten and his men ride off.\n";
                            std::cout << "You watch as the Saler approaches you with a canteen and small slice of horse meat. She tells you that she'd\n";
                            std::cout << "happily let you die for being so undisciplined, but will respect the Capten's orders to keep you alive.\n\n";

                            std::cout << "You back begins to itch with pain as you feel the summer sun blasting across it.\n\n";
                            return 0;

                        default:
                            std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                            return 0;
                    }
                    break;

                
                case 'c':
                    std::cout << "You leave the tent. As you step outside into the summer heat, a nearby Staf-Sarn't yells out:\n\n";

                    std::cout << "'What are you doing Mreen!? Get back here and into formation!'\n\n";
                    
                    std::cout << "Before you can react a tall Sarn't grabs you by the arm and pulls you\n";
                    std::cout << "into the formation. He hands you a javlin and kay-bar and says, 'Take these\n";
                    std::cout << "and get back into line, we're 5 mikes out from stepping off.'\n\n";

                    std::cout << "You fall in line to a compny of Mreens and ask the Piefcee next to\n";
                    std::cout << "you what is going on.\n\n";

                    std::cout << "Piefcee: Don't you know, we're rucking to Flamingo today before raiding\n";
                    std::cout << "Rimrock tomorrow or the next. After that we'll hit Pioneer Town or maybe even\n";
                    std::cout << "Yucca. I hope we go to Yucca, I've never been to the big town before. I hear\n";
                    std::cout << "they have good water and even some ice from Big Bear in the winter time.\n\n";

                    std::cout << "But I'm on a mission to find lost holy relics, I can't go!\n\n";

                    std::cout << "A nearby Corpl responds.\n\n";

                    std::cout << "Corpl: Stop making shit up to get out of this raiding op. It is every Mreen's\n";
                    std::cout << "duty to raid and fight for Mojaveria.\n\n";
                    
                    std::cout << "What do you want to do? [select]\n";

                    std::cout << "   a) Join the Raiders and pursue glory through combat.\n";
                    std::cout << "   b) Refuse to join, adament that your mission for King Kernal is real and is the priority.\n\n";

                    char input9; 
                    std::cin >> input9;
                    std::cout << "\n";

                    if (input9 == 'a') {
                        std::cout << "You're right, it's my duty.\n\n";

                        std::cout << "Corpl: KILL! Strength & Honor Mreen.\n\n";

                        std::cout << "You spend the next week raiding small villages across the Western Desert, moving\n";
                        std::cout << "at night, raiding in the day, and consolidating water and diesel taken from the enemy.\n\n";

                        std::cout << "On the last day of the raid, Capten Rosales makes you Pointman - a high honor for any\n";
                        std::cout << "young Mreen. As you lead the Raiders into Yucca, an enemy sword finds its mark high on\n";
                        std::cout << "your right arm. Your javlin arm gone, you draw your kay-bar with your left and rush into the\n";
                        std::cout << "throng of Yuccan militia, taking one or two more before dying in glorious service to Mojaveria.\n\n";
                        return 0;
                    }
                    else if (input9 == 'b') {
                        std::cout << "No I have an important mission for King Kernal! I am leaving - NOW!\n\n";
                        
                        std::cout << "Corpl: Your refusal to join us Raiders is an act of treason!\n";
                        std::cout << "Mreens, ATTACK THIS TRAITOR!\n\n";

                        std::cout << "The Corpl launches for you as he draws his kay-bar and tries to grab your arm.\n";
                        std::cout << "The Piefcee next to you grabs you by the collar and plunges his kay-bar\n";
                        std::cout << "high into your torso. As the air leaves your lung you feel the 'ffwHAP' of\n";
                        std::cout << "a javlin hitting your stomach before lodging into the front of your spine.\n\n";

                        std::cout << "After you bleed out, the Mreens strip you of the brass E-G-A hanging around your\n";
                        std::cout << "neck and leave your body for the desert.\n\n";
                        return 0;
                    }
                    else {
                        std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                        return 0;
                    }
                
                default:
                    std::cout << "This was not a valid choice. You have failed the mission.\n\n";
                    return 0;
            }
        }
        else if (input1 == 'b') {
            std::cout << "This choice is not yet built out.\n"; // DRVercher 20240105
            return 0;
        }
        else {
            std::cout << "You are too dumb for this mission. Goodbye.\n";
        }

    }
    else {
        std::cout << "Fame does not attain itself. Goodbye.\n";
    }

    return 0; 
}
