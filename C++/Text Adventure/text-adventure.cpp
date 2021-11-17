#include <iostream>
using namespace std;


int main() {

    cout << "It's been a strange day indeed. You've fallen down a rabbit hole, happened across a strange tea party, and had many other absurd adventures.\n";
    cout << "But now, you are called to a trial of some sort, ushered in by a Gryphon.\n";
    cout << "The King and Queen of Hearts are seated on their throne when you arrive, with a great crowd assembled about them — all sorts of little birds and beasts, as well as the whole pack of cards.\n";
    cout << "The White Rabbit is standing near the King, with a trumpet in one hand, and a scroll of parchment in the other.\n";
    cout << "\n";
    cout << "     \\\\\n";
    cout << "      \\\\_\n";
    cout << "      ( _\\Dn==(\n";
    cout << "      / \\__|\n";
    cout << "     / _/`\"`\n";
    cout << "    {\\  )_\n";
    cout << "     `\"\"\"`\n";

    cout << "\n";
    cout << "In the very middle of the court is a table, with a large dish of tarts upon it. They look really good, making you feel quite hungry.\n";
    cout << "You see twelve jurors writing busily on slates. You wonder how they have anything to write down before the trial's begun.\n";
    cout << "*      *      *\n";
    cout << "What do you do?\n";

    char choice1;
    
    for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B' && choice1 != 'C'; i++) {

        cout << "Enter A if you ask the Gryphon next to you what the jurors are doing.\n";
        cout << "Enter B if you sneak a tart.\n";
        cout << "Enter C if you sit and wait for the trial to begin.\n";
        cin >> choice1;

    }

    switch (choice1) {

        case 'A':
            cout << "The Gryphon explains that the jurors are writing down their names for fear they should forget before the end of the trial.\n";
            cout << "'How stupid!' you say in a loud voice, but you are cut off.\n";
            cout << "'SILENCE IN THE COURT!' shrieks the White Rabbit. The king puts on his glasses and looks around anxiously to see who was talking.\n";
            cout << "You manage to keep your mouth shut and the King fails to notice you.\n";
            break;

        case 'B':
            cout << "Just as you get your hand on a scrumptious-looking tart, you hear a bellowing voice that fills you with dread.\n";
            cout << "'YOU did it!' screams the Queen of Hearts.\n";
            cout << "'I did what?' you ask.\n";
            cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
            cout << "Several cards dressed as guards carry you off to be executed.\n";
            cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
            cout << "THE END\n";
            return 0;

        case 'C':
            cout << "The court begins to settle down.\n";
            break;

        default:
            cout << "Sorry, you haven't entered a valid choice.\n";
            cout << "Goodbye.\n";
            return 0;

    }

    cout << "'Herald, read the accusation!' yells the King.\n";
    cout << "On this the White Rabbit blows three blasts on the trumpet, and then unrolls the parchment scroll, and reads as follows:\n";
    cout << "\n";
    cout << "'The Queen of Hearts, she made some tarts,\n";
    cout << "    All on a summer day:\n";
    cout << "The Knave of Hearts, he stole those tarts,\n";
    cout << "    And took them quite away!'\n";
    cout << "\n";
    cout << "'Consider your verdict,' says the King to the jury.\n";
    cout << "'Not yet, not yet,' the Rabbit hastily interrupts him.\n";
    cout << "\n";

    cout << "*      *      *\n";
    cout << "As the first witness is called, you notice a bit of cake in your pocket. You are still very hungry.\n";
    cout << "Do you eat the bit of cake in your pocket?\n";
    char choice2;
    
    for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B'; i++) {

        cout << "Enter A if you eat the cake.\n";
        cout << "Enter B if you decide to wait until the trial is over.\n";
        cin >> choice2;

    }

    if (choice2 != 'A' && choice2 != 'B') {

        cout << "Sorry, you haven't entered a valid choice.\n";
        cout << "Goodbye.\n";
        return 0;

    } else if (choice2 == 'B') {

        cout << "Your stomach rumbles audibly, interrupting the interrogation.\n";
        cout << "'YOU did it!' screams the Queen of Hearts.\n";
        cout << "'I did what?' you ask.\n";
        cout << "'SHE stole the tarts! Thief! OFF WITH HER HEAD!' the Queen is pointing at you. Her face is growing redder as her voice gets higher.\n";
        cout << "Several cards dressed as guards carry you off to be executed.\n";
        cout << "Just as your head is on the chopping block, you catch a glimpse of a wide smile in the tree above.\n";
        cout << "THE END\n";
        return 0;

    }

    cout << "You eat the cake and it really does make you feel better. Meanwhile, the trial proceeds...\n";
    cout << "The first witness is the Hatter.\n";
    cout << "'Give your evidence,' says the King, 'and don't be nervous, or you'll be executed on the spot.'\n";
    cout << "\n";

    cout << "*      *      *\n";
    cout << "While the Hatter answers nervously, you suddenly feel a very curious sensation — you are growing larger.\n";
    cout << "It must have been the cake you ate...\n";
    cout << "What do you do?\n";
    char choice3;
    
    for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B'; i++) {

        cout << "Enter A if you get up and leave the court.\n";
        cout << "Enter B if you decide to remain where you are as long as there is room for you.\n";
        cin >> choice3;

    }

    if (choice3 != 'A' && choice3 != 'B') {

        cout << "Sorry, you haven't entered a valid choice.\n";
        cout << "Goodbye.\n";
        return 0;

    } else if (choice3 == 'A') {

        cout << "You leave the court room in search of a way home.\n";
        cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
        cout << "THE END\n";
        return 0;

    }

    cout << "You stay, much to the annoyance of the Dormouse who is getting squeezed sitting next to you.\n";
    cout << "'Never mind!' says the King to the Hatter, 'call the next witness.'\n";
    cout << "'— and just take his head off outside' says the Queen to one of the officers.'\n";
    cout << "You watch the White Rabbit fumble over the list. He reads at the the top of his shrill voice:\n";
    cout << "ALICE!\n";
    cout << "\n";
    cout << "*      *      *\n";
    cout << "In your surprise, what do you do?\n";

    char choice4;
    
    for (int i = 0; i < 3 && choice4 != 'A' && choice4 != 'B' && choice4 != 'C'; i++) {

        cout << "Enter A if you rise up and declare yourself present.\n";
        cout << "Enter B if you stay seated and shout 'Here!'.\n";
        cout << "Enter C if you do nothing.\n";
        cin >> choice4;

    }

    if (choice4 != 'A' && choice4 != 'B' && choice4 != 'C') {

        cout << "Sorry, you haven't entered a valid choice.\n";
        cout << "Goodbye.\n";
        return 0;

    } else if (choice4 == 'A') {

        cout << "'Here!' You jump up in such a hurry that you knock over the jury box with the edge of your skirt.\n";
        cout << "The jury is scattered across the floor.\n";
        cout << "'The trial cannot proceed,' says the King accusingly, 'until all the jurymen are back in their proper places.'\n";
        cout << "You hastily put as many jury members back in place as you can";

    } else if (choice4 == 'C') {

        cout << "All eyes turn to you, except for the King and Queen.\n";
        cout << "'That's Alice,' the Gryphon points you out helpfully, even as you glare at him.\n";

    }

    cout << "'What do you know about this business?' the King asks you.\n";
    cout << "'Nothing,' you reply, honestly.\n";
    cout << "The King reads from his book, 'Rule forty-two. All persons more than a mile high to leave the court.'\n";

    cout << "*      *      *\n";
    cout << "How do you respond?\n";

    char choice5;

    for (int i = 0; i < 3 && choice5 != 'A' && choice5 != 'B' && choice5 != 'C'; i++) {

        cout << "Enter A if you agree to leave the court.\n";
        cout << "Enter B if you argue about your height with the King.\n";
        cout << "Enter C if you flip over the jury box again and steal a tart.\n";
        cin >> choice5;

    }

    switch (choice5) {

        case 'A':
            cout << "You leave the court room in search of a way home.\n";
            cout << "However, everyone who could help you is still in the court room, so you wander the forest for years.\n";
            cout << "THE END\n";
            return 0;

        case 'B':
            cout << "'I'm not a mile high,' you say.\n";
            cout << "'Nearly TWO miles high,' says the Queen of Hearts.\n";
            cout << "'Well, I shan't go at any rate,' you reply.\n";
            cout << "'Hold your tongue!' says the Queen turning purple.\n";
            cout << "'I won't!' you retort.\n";
            cout << "'Off with her head!' the Queen shouts at the top of her voice.\n";
            cout << "'Who cares?' you ask, realizing how small everyone has become. 'You're nothing but a pack of cards!'\n";
            break;

        case 'C':
            cout << "'Stuff and nonsense!' you yell, as you flip over the jury box - this time on purpose.\n";
            cout << "'Hold your tongue!' says the Queen turning purple.\n";
            cout << "'I'll do no such thing!' you retort.\n";
            cout << "You scoop up the remaining tarts, which now appear to be very small, and shove them all in your mouth.\n";
            cout << "You hear the Queen cry, 'Off with her head!' as you begin to storm out of the court.\n";
            break;

        default:
            cout << "Sorry, you haven't entered a valid choice.\n";
            cout << "Goodbye.\n";
            return 0;
    }

    cout << "At this, the whole pack rises up into the air and flies down on you.\n";
    cout << "You try to beat them off, and awake to find yourself lying on the bank of the river with your head in your sister's lap.\n";
    cout << "'Wake up, Alice dear!' your sister says. 'Why, what a long sleep you've had!'\n";
    cout << "'Oh I've had such a curious dream' you reply. And you tell her, as well as you can remember, all the strange adventures you've just had.\n";

}