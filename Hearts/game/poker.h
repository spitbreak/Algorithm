//--------------- Revision List -----------------------
//   2016-03-20  lichao  create version
//   2016-03-26  lichao  add interface get the suite of poker
//-----------------------------------------------------

enum Suite
{
    ERR_SUITE = -1,
    HEART_SUITE = 1,
    DIAMOND_SUITE = 2,
    SPADE_SUITE = 3,
    CLUB_SUITE = 4
};

enum Rank
{
    ERR_RANK = -1,
    ACE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10,
    JAKE = 11,
    QUEEN = 12,
    KING = 13
};

const unsigned short szHeartPokerCards[] = {0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d};
const unsigned short szDiamondPokerCards[] = {0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d};
const unsigned short szSpadePokerCards[] = {0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d};
const unsigned short szClubPokerCards[] = {0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d};

const unsigned short usBlackJoker = 0x0f;
const unsigned short usRedJoker = 0xf0;

const enum Suite
getPokerSuite(const unsigned short usPoker);
