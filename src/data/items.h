const struct Item gItems[] =
{
    [ITEM_NONE] =
    {
        .name = _("????????"),
        .itemId = ITEM_NONE,
        .price = 0,
        .description = sDummyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Pokeballs

    [ITEM_MASTER_BALL] =
    {
        .name = _("Master Ball"),
        .itemId = ITEM_MASTER_BALL,
        .price = 0,
        .description = sMasterBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_MASTER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_MASTER_BALL - FIRST_BALL,
    },

    [ITEM_ULTRA_BALL] =
    {
        .name = _("Ultra Ball"),
        .itemId = ITEM_ULTRA_BALL,
        .price = 1200,
        .description = sUltraBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_ULTRA_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_ULTRA_BALL - FIRST_BALL,
    },

    [ITEM_GREAT_BALL] =
    {
        .name = _("Great Ball"),
        .itemId = ITEM_GREAT_BALL,
        .price = 600,
        .description = sGreatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_GREAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_GREAT_BALL - FIRST_BALL,
    },

    [ITEM_POKE_BALL] =
    {
        .name = _("Poké Ball"),
        .itemId = ITEM_POKE_BALL,
        .price = 200,
        .description = sPokeBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_POKE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_POKE_BALL - FIRST_BALL,
    },

    [ITEM_SAFARI_BALL] =
    {
        .name = _("Safari Ball"),
        .itemId = ITEM_SAFARI_BALL,
        .price = 0,
        .description = sSafariBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_SAFARI_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_SAFARI_BALL - FIRST_BALL,
    },

    [ITEM_NET_BALL] =
    {
        .name = _("Net Ball"),
        .itemId = ITEM_NET_BALL,
        .price = 1000,
        .description = sNetBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NET_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NET_BALL - FIRST_BALL,
    },

    [ITEM_DIVE_BALL] =
    {
        .name = _("Dive Ball"),
        .itemId = ITEM_DIVE_BALL,
        .price = 1000,
        .description = sDiveBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_DIVE_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_DIVE_BALL - FIRST_BALL,
    },

    [ITEM_NEST_BALL] =
    {
        .name = _("Nest Ball"),
        .itemId = ITEM_NEST_BALL,
        .price = 1000,
        .description = sNestBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_NEST_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_NEST_BALL - FIRST_BALL,
    },

    [ITEM_REPEAT_BALL] =
    {
        .name = _("Repeat Ball"),
        .itemId = ITEM_REPEAT_BALL,
        .price = 1000,
        .description = sRepeatBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_REPEAT_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_REPEAT_BALL - FIRST_BALL,
    },

    [ITEM_TIMER_BALL] =
    {
        .name = _("Timer Ball"),
        .itemId = ITEM_TIMER_BALL,
        .price = 1000,
        .description = sTimerBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_TIMER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_TIMER_BALL - FIRST_BALL,
    },

    [ITEM_LUXURY_BALL] =
    {
        .name = _("Luxury Ball"),
        .itemId = ITEM_LUXURY_BALL,
        .price = 1000,
        .description = sLuxuryBallDesc,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_LUXURY_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_LUXURY_BALL - FIRST_BALL,
    },

    [ITEM_PREMIER_BALL] =
    {
        .name = _("Premier Ball"),
        .itemId = ITEM_PREMIER_BALL,
        .price = 200,
        .description = gPremierBallItemDescription,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 11,
    },

    [ITEM_LEVEL_BALL] =
    {
        .name = _("Level Ball"),
        .itemId = ITEM_LEVEL_BALL,
        .price = 2000,
        .description = gItemDescription_LevelBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 12,
    },

    [ITEM_LURE_BALL] =
    {
        .name = _("Lure Ball"),
        .itemId = ITEM_LURE_BALL,
        .price = 2000,
        .description = gItemDescription_LureBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 13,
    },

    [ITEM_MOON_BALL] =
    {
        .name = _("Moon Ball"),
        .itemId = ITEM_MOON_BALL,
        .price = 2000,
        .description = gItemDescription_MoonBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 14,
    },

    [ITEM_FRIEND_BALL] =
    {
        .name = _("Friend Ball"),
        .itemId = ITEM_FRIEND_BALL,
        .price = 2000,
        .description = gItemDescription_FriendBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 15,
    },

    [ITEM_LOVE_BALL] =
    {
        .name = _("Love Ball"),
        .itemId = ITEM_LOVE_BALL,
        .price = 2000,
        .description = gItemDescription_LoveBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 16,
    },

    [ITEM_HEAVY_BALL] =
    {
        .name = _("Heavy Ball"),
        .itemId = ITEM_HEAVY_BALL,
        .price = 2000,
        .description = gItemDescription_HeavyBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 17,
    },

    [ITEM_FAST_BALL] =
    {
        .name = _("Fast Ball"),
        .itemId = ITEM_FAST_BALL,
        .price = 2000,
        .description = gItemDescription_FastBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 18,
    },

    [ITEM_HEAL_BALL] =
    {
        .name = _("Heal Ball"),
        .itemId = ITEM_HEAL_BALL,
        .price = 300,
        .description = gItemDescription_HealBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 19,
    },

    [ITEM_QUICK_BALL] =
    {
        .name = _("Quick Ball"),
        .itemId = ITEM_QUICK_BALL,
        .price = 3000,
        .description = gItemDescription_QuickBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 20,
    },

    [ITEM_DUSK_BALL] =
    {
        .name = _("Dusk Ball"),
        .itemId = ITEM_DUSK_BALL,
        .price = 3000,
        .description = gItemDescription_DuskBall,
        .pocket = POCKET_POKE_BALLS,
        .type = ITEM_PREMIER_BALL - FIRST_BALL,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = ITEM_PREMIER_BALL - FIRST_BALL,
    },

<<<<<<< HEAD
=======
    [ITEM_CHERISH_BALL] =
    {
        .name = _("Cherish Ball"),
        .itemId = ITEM_CHERISH_BALL,
        .price = 10,
        .description = gItemDescription_CherishBall,
        .pocket = POCKET_POKE_BALLS,
        .type = 11,
        .fieldUseFunc = NULL,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_PokeBall,
        .secondaryId = 22,
    },

>>>>>>> Decap existing item names
// Medicine

    [ITEM_POTION] =
    {
        .name = _("Potion"),
        .itemId = ITEM_POTION,
        .price = 300,
        .holdEffectParam = 20,
        .description = sPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ANTIDOTE] =
    {
        .name = _("Antidote"),
        .itemId = ITEM_ANTIDOTE,
        .price = 100,
        .description = sAntidoteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BURN_HEAL] =
    {
        .name = _("Burn Heal"),
        .itemId = ITEM_BURN_HEAL,
        .price = 250,
        .description = sBurnHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ICE_HEAL] =
    {
        .name = _("Ice Heal"),
        .itemId = ITEM_ICE_HEAL,
        .price = 250,
        .description = sIceHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_AWAKENING] =
    {
        .name = _("Awakening"),
        .itemId = ITEM_AWAKENING,
        .price = 250,
        .description = sAwakeningDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PARALYZE_HEAL] =
    {
        .name = _("Parlyz Heal"),
        .itemId = ITEM_PARALYZE_HEAL,
        .price = 200,
        .description = sParalyzeHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_RESTORE] =
    {
        .name = _("Full Restore"),
        .itemId = ITEM_FULL_RESTORE,
        .price = 3000,
        .holdEffectParam = 255,
        .description = sFullRestoreDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_POTION] =
    {
        .name = _("Max Potion"),
        .itemId = ITEM_MAX_POTION,
        .price = 2500,
        .holdEffectParam = 255,
        .description = sMaxPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HYPER_POTION] =
    {
        .name = _("Hyper Potion"),
        .itemId = ITEM_HYPER_POTION,
        .price = 1200,
        .holdEffectParam = 200,
        .description = sHyperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SUPER_POTION] =
    {
        .name = _("Super Potion"),
        .itemId = ITEM_SUPER_POTION,
        .price = 700,
        .holdEffectParam = 50,
        .description = sSuperPotionDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FULL_HEAL] =
    {
        .name = _("Full Heal"),
        .itemId = ITEM_FULL_HEAL,
        .price = 600,
        .description = sFullHealDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVE] =
    {
        .name = _("Revive"),
        .itemId = ITEM_REVIVE,
        .price = 1500,
        .description = sReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MAX_REVIVE] =
    {
        .name = _("Max Revive"),
        .itemId = ITEM_MAX_REVIVE,
        .price = 4000,
        .description = sMaxReviveDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FRESH_WATER] =
    {
        .name = _("Fresh Water"),
        .itemId = ITEM_FRESH_WATER,
        .price = 200,
        .holdEffectParam = 50,
        .description = sFreshWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SODA_POP] =
    {
        .name = _("Soda Pop"),
        .itemId = ITEM_SODA_POP,
        .price = 300,
        .holdEffectParam = 60,
        .description = sSodaPopDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEMONADE] =
    {
        .name = _("Lemonade"),
        .itemId = ITEM_LEMONADE,
        .price = 350,
        .holdEffectParam = 80,
        .description = sLemonadeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_MOOMOO_MILK] =
    {
        .name = _("Moomoo Milk"),
        .itemId = ITEM_MOOMOO_MILK,
        .price = 500,
        .holdEffectParam = 100,
        .description = sMoomooMilkDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_POWDER] =
    {
        .name = _("Energypowder"),
        .itemId = ITEM_ENERGY_POWDER,
        .price = 500,
        .description = sEnergyPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ENERGY_ROOT] =
    {
        .name = _("Energy Root"),
        .itemId = ITEM_ENERGY_ROOT,
        .price = 800,
        .description = sEnergyRootDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_HEAL_POWDER] =
    {
        .name = _("Heal Powder"),
        .itemId = ITEM_HEAL_POWDER,
        .price = 450,
        .description = sHealPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_REVIVAL_HERB] =
    {
        .name = _("Revival Herb"),
        .itemId = ITEM_REVIVAL_HERB,
        .price = 2800,
        .description = sRevivalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ETHER] =
    {
        .name = _("Ether"),
        .itemId = ITEM_ETHER,
        .price = 1200,
        .holdEffectParam = 10,
        .description = sEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ETHER] =
    {
        .name = _("Max Ether"),
        .itemId = ITEM_MAX_ETHER,
        .price = 2000,
        .holdEffectParam = 255,
        .description = sMaxEtherDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ELIXIR] =
    {
        .name = _("Elixir"),
        .itemId = ITEM_ELIXIR,
        .price = 3000,
        .holdEffectParam = 10,
        .description = sElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_MAX_ELIXIR] =
    {
        .name = _("Max Elixir"),
        .itemId = ITEM_MAX_ELIXIR,
        .price = 4500,
        .holdEffectParam = 255,
        .description = sMaxElixirDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_LAVA_COOKIE] =
    {
        .name = _("Lava Cookie"),
        .itemId = ITEM_LAVA_COOKIE,
        .price = 200,
        .description = sLavaCookieDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BLUE_FLUTE] =
    {
        .name = _("Blue Flute"),
        .itemId = ITEM_BLUE_FLUTE,
        .price = 100,
        .description = sBlueFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_YELLOW_FLUTE] =
    {
        .name = _("Yellow Flute"),
        .itemId = ITEM_YELLOW_FLUTE,
        .price = 200,
        .description = sYellowFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RED_FLUTE] =
    {
        .name = _("Red Flute"),
        .itemId = ITEM_RED_FLUTE,
        .price = 300,
        .description = sRedFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_BLACK_FLUTE] =
    {
        .name = _("Black Flute"),
        .itemId = ITEM_BLACK_FLUTE,
        .price = 400,
        .holdEffectParam = 50,
        .description = sBlackFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_WHITE_FLUTE] =
    {
        .name = _("White Flute"),
        .itemId = ITEM_WHITE_FLUTE,
        .price = 500,
        .holdEffectParam = 150,
        .description = sWhiteFluteDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_BlackWhiteFlute,
    },

    [ITEM_BERRY_JUICE] =
    {
        .name = _("Berry Juice"),
        .itemId = ITEM_BERRY_JUICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 20,
        .description = sBerryJuiceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SWEET_HEART] =
    {
        .name = _("Sweet Heart"),
        .itemId = ITEM_SWEET_HEART,
        .price = 3000,
        .holdEffectParam = 20,
        .description = sSweetHeartDesc,
        .pocket = POCKET_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_BIG_MALASADA] =
    {
        .name = _("Big Malasada"),
        .itemId = ITEM_BIG_MALASADA,
        .price = 350,
        .description = sBigMalasadaDesc,
        .pocket = POCKET_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_OLD_GATEAU] =
    {
        .name = _("Old Gateau"),
        .itemId = ITEM_OLD_GATEAU,
        .price = 350,
        .description = sOldGateauDesc,
        .pocket = POCKET_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = 1,
        .battleUseFunc = ItemUseInBattle_Medicine,
        .secondaryId = 0,
    },

    [ITEM_SACRED_ASH] =
    {
        .name = _("Sacred Ash"),
        .itemId = ITEM_SACRED_ASH,
        .price = 200,
        .description = sSacredAshDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_SacredAsh,
    },

// Collectibles

    [ITEM_SHOAL_SALT] =
    {
        .name = _("Shoal Salt"),
        .itemId = ITEM_SHOAL_SALT,
        .price = 20,
        .description = sShoalSaltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHOAL_SHELL] =
    {
        .name = _("Shoal Shell"),
        .itemId = ITEM_SHOAL_SHELL,
        .price = 20,
        .description = sShoalShellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SHARD] =
    {
        .name = _("Red Shard"),
        .itemId = ITEM_RED_SHARD,
        .price = 200,
        .description = sRedShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SHARD] =
    {
        .name = _("Blue Shard"),
        .itemId = ITEM_BLUE_SHARD,
        .price = 200,
        .description = sBlueShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SHARD] =
    {
        .name = _("Yellow Shard"),
        .itemId = ITEM_YELLOW_SHARD,
        .price = 200,
        .description = sYellowShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SHARD] =
    {
        .name = _("Green Shard"),
        .itemId = ITEM_GREEN_SHARD,
        .price = 200,
        .description = sGreenShardDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Vitamins

    [ITEM_HP_UP] =
    {
        .name = _("HP Up"),
        .itemId = ITEM_HP_UP,
        .price = 9800,
        .description = sHPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PROTEIN] =
    {
        .name = _("Protein"),
        .itemId = ITEM_PROTEIN,
        .price = 9800,
        .description = sProteinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_IRON] =
    {
        .name = _("Iron"),
        .itemId = ITEM_IRON,
        .price = 9800,
        .description = sIronDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CARBOS] =
    {
        .name = _("Carbos"),
        .itemId = ITEM_CARBOS,
        .price = 9800,
        .description = sCarbosDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_CALCIUM] =
    {
        .name = _("Calcium"),
        .itemId = ITEM_CALCIUM,
        .price = 9800,
        .description = sCalciumDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_RARE_CANDY] =
    {
        .name = _("Rare Candy"),
        .itemId = ITEM_RARE_CANDY,
        .price = 4800,
        .description = sRareCandyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_RareCandy,
    },

    [ITEM_PP_UP] =
    {
        .name = _("PP Up"),
        .itemId = ITEM_PP_UP,
        .price = 9800,
        .description = sPPUpDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

    [ITEM_ZINC] =
    {
        .name = _("Zinc"),
        .itemId = ITEM_ZINC,
        .price = 9800,
        .description = sZincDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
    },

    [ITEM_PP_MAX] =
    {
        .name = _("PP Max"),
        .itemId = ITEM_PP_MAX,
        .price = 9800,
        .description = sPPMaxDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPUp,
    },

// Battle items

    [ITEM_GUARD_SPEC] =
    {
        .name = _("Guard Spec."),
        .itemId = ITEM_GUARD_SPEC,
        .price = 700,
        .description = sGuardSpecDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_DIRE_HIT] =
    {
        .name = _("Dire Hit"),
        .itemId = ITEM_DIRE_HIT,
        .price = 650,
        .description = sDireHitDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ATTACK] =
    {
        .name = _("X Attack"),
        .itemId = ITEM_X_ATTACK,
        .price = 500,
        .description = sXAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_DEFENSE] =
    {
        .name = _("X Defend"),
        .itemId = ITEM_X_DEFENSE,
        .price = 550,
        .description = sXDefendDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SPEED] =
    {
        .name = _("X Speed"),
        .itemId = ITEM_X_SPEED,
        .price = 350,
        .description = sXSpeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_ACCURACY] =
    {
        .name = _("X Accuracy"),
        .itemId = ITEM_X_ACCURACY,
        .price = 950,
        .description = sXAccuracyDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_X_SP_ATK] =
    {
        .name = _("X Sp. Atk."),
        .itemId = ITEM_X_SP_ATK,
        .price = 350,
        .description = sXSpecialAttackDesc,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 2,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
        .secondaryId = 0,
    },

    [ITEM_X_SP_DEF] =
    {
        .name = _("X Sp. Def."),
        .itemId = ITEM_X_SP_DEF,
        .price = 2000,
        .description = sXSpecialDefenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_StatIncrease,
    },

    [ITEM_POKE_DOLL] =
    {
        .name = _("Poké Doll"),
        .itemId = ITEM_POKE_DOLL,
        .price = 1000,
        .description = sPokeDollDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

    [ITEM_FLUFFY_TAIL] =
    {
        .name = _("Fluffy Tail"),
        .itemId = ITEM_FLUFFY_TAIL,
        .price = 1000,
        .description = sFluffyTailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_OTHER,
        .battleUseFunc = ItemUseInBattle_Escape,
    },

// Field items

    [ITEM_SUPER_REPEL] =
    {
        .name = _("Super Repel"),
        .itemId = ITEM_SUPER_REPEL,
        .price = 500,
        .holdEffectParam = 200,
        .description = sSuperRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_MAX_REPEL] =
    {
        .name = _("Max Repel"),
        .itemId = ITEM_MAX_REPEL,
        .price = 700,
        .holdEffectParam = 250,
        .description = sMaxRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

    [ITEM_ESCAPE_ROPE] =
    {
        .name = _("Escape Rope"),
        .itemId = ITEM_ESCAPE_ROPE,
        .price = 550,
        .description = sEscapeRopeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_FIELD,
        .fieldUseFunc = ItemUseOutOfBattle_EscapeRope,
    },

    [ITEM_REPEL] =
    {
        .name = _("Repel"),
        .itemId = ITEM_REPEL,
        .price = 350,
        .holdEffectParam = 100,
        .description = sRepelDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Repel,
    },

// Evolution stones

    [ITEM_SUN_STONE] =
    {
        .name = _("Sun Stone"),
        .itemId = ITEM_SUN_STONE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSunStoneItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MOON_STONE] =
    {
        .name = _("Moon Stone"),
        .itemId = ITEM_MOON_STONE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMoonStoneItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FIRE_STONE] =
    {
        .name = _("Fire Stone"),
        .itemId = ITEM_FIRE_STONE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gFireStoneItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_THUNDER_STONE] =
    {
        .name = _("ThunderStone"),
        .itemId = ITEM_THUNDER_STONE,
        .price = 2100,
        .description = sThunderStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_WATER_STONE] =
    {
        .name = _("Water Stone"),
        .itemId = ITEM_WATER_STONE,
        .price = 2100,
        .description = sWaterStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

    [ITEM_LEAF_STONE] =
    {
        .name = _("Leaf Stone"),
        .itemId = ITEM_LEAF_STONE,
        .price = 2100,
        .description = sLeafStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_EvolutionStone,
    },

// Valuable items

    [ITEM_TINY_MUSHROOM] =
    {
        .name = _("TinyMushroom"),
        .itemId = ITEM_TINY_MUSHROOM,
        .price = 500,
        .description = sTinyMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_MUSHROOM] =
    {
        .name = _("Big Mushroom"),
        .itemId = ITEM_BIG_MUSHROOM,
        .price = 5000,
        .description = sBigMushroomDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PEARL] =
    {
        .name = _("Pearl"),
        .itemId = ITEM_PEARL,
        .price = 1400,
        .description = sPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_PEARL] =
    {
        .name = _("Big Pearl"),
        .itemId = ITEM_BIG_PEARL,
        .price = 7500,
        .description = sBigPearlDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARDUST] =
    {
        .name = _("Stardust"),
        .itemId = ITEM_STARDUST,
        .price = 2000,
        .description = sStardustDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STAR_PIECE] =
    {
        .name = _("Star Piece"),
        .itemId = ITEM_STAR_PIECE,
        .price = 9800,
        .description = sStarPieceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NUGGET] =
    {
        .name = _("Nugget"),
        .itemId = ITEM_NUGGET,
        .price = 10000,
        .description = sNuggetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEART_SCALE] =
    {
        .name = _("Heart Scale"),
        .itemId = ITEM_HEART_SCALE,
        .price = 100,
        .description = sHeartScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Mail
    [ITEM_ORANGE_MAIL] =
    {
        .name = _("Orange Mail"),
        .itemId = ITEM_ORANGE_MAIL,
        .price = 50,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gOrangeMailItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HARBOR_MAIL] =
    {
        .name = _("Harbor Mail"),
        .itemId = ITEM_HARBOR_MAIL,
        .price = 50,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHarborMailItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 1,
    },

    [ITEM_GLITTER_MAIL] =
    {
        .name = _("Glitter Mail"),
        .itemId = ITEM_GLITTER_MAIL,
        .price = 50,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gGlitterMailItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 2,
    },

    [ITEM_MECH_MAIL] =
    {
        .name = _("Mech Mail"),
        .itemId = ITEM_MECH_MAIL,
        .price = 50,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMechMailItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 0,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 3,
    },

    [ITEM_WOOD_MAIL] =
    {
        .name = _("Wood Mail"),
        .itemId = ITEM_WOOD_MAIL,
        .price = 50,
        .description = sWoodMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WOOD_MAIL),
    },

    [ITEM_WAVE_MAIL] =
    {
        .name = _("Wave Mail"),
        .itemId = ITEM_WAVE_MAIL,
        .price = 50,
        .description = sWaveMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_WAVE_MAIL),
    },

    [ITEM_BEAD_MAIL] =
    {
        .name = _("Bead Mail"),
        .itemId = ITEM_BEAD_MAIL,
        .price = 50,
        .description = sBeadMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_BEAD_MAIL),
    },

    [ITEM_SHADOW_MAIL] =
    {
        .name = _("Shadow Mail"),
        .itemId = ITEM_SHADOW_MAIL,
        .price = 50,
        .description = sShadowMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_SHADOW_MAIL),
    },

    [ITEM_TROPIC_MAIL] =
    {
        .name = _("Tropic Mail"),
        .itemId = ITEM_TROPIC_MAIL,
        .price = 50,
        .description = sTropicMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_TROPIC_MAIL),
    },

    [ITEM_DREAM_MAIL] =
    {
        .name = _("Dream Mail"),
        .itemId = ITEM_DREAM_MAIL,
        .price = 50,
        .description = sDreamMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_DREAM_MAIL),
    },

    [ITEM_FAB_MAIL] =
    {
        .name = _("Fab Mail"),
        .itemId = ITEM_FAB_MAIL,
        .price = 50,
        .description = sFabMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_FAB_MAIL),
    },

    [ITEM_RETRO_MAIL] =
    {
        .name = _("Retro Mail"),
        .itemId = ITEM_RETRO_MAIL,
        .price = 0,
        .description = sRetroMailDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_MAIL,
        .fieldUseFunc = ItemUseOutOfBattle_Mail,
        .secondaryId = ITEM_TO_MAIL(ITEM_RETRO_MAIL),
    },

// Berries

    [ITEM_CHERI_BERRY] =
    {
        .name = _("Cheri Berry"),
        .itemId = ITEM_CHERI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PAR,
        .description = sCheriBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_CHESTO_BERRY] =
    {
        .name = _("Chesto Berry"),
        .itemId = ITEM_CHESTO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_SLP,
        .description = sChestoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PECHA_BERRY] =
    {
        .name = _("Pecha Berry"),
        .itemId = ITEM_PECHA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_PSN,
        .description = sPechaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_RAWST_BERRY] =
    {
        .name = _("Rawst Berry"),
        .itemId = ITEM_RAWST_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_BRN,
        .description = sRawstBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_ASPEAR_BERRY] =
    {
        .name = _("Aspear Berry"),
        .itemId = ITEM_ASPEAR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_FRZ,
        .description = sAspearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LEPPA_BERRY] =
    {
        .name = _("Leppa Berry"),
        .itemId = ITEM_LEPPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_PP,
        .holdEffectParam = 10,
        .description = sLeppaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_PPRecovery,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_PPRecovery,
    },

    [ITEM_ORAN_BERRY] =
    {
        .name = _("Oran Berry"),
        .itemId = ITEM_ORAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 10,
        .description = sOranBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_PERSIM_BERRY] =
    {
        .name = _("Persim Berry"),
        .itemId = ITEM_PERSIM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_CONFUSION,
        .description = sPersimBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_LUM_BERRY] =
    {
        .name = _("Lum Berry"),
        .itemId = ITEM_LUM_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CURE_STATUS,
        .description = sLumBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_SITRUS_BERRY] =
    {
        .name = _("Sitrus Berry"),
        .itemId = ITEM_SITRUS_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESTORE_HP,
        .holdEffectParam = 30,
        .description = sSitrusBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_Medicine,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_Medicine,
    },

    [ITEM_FIGY_BERRY] =
    {
        .name = _("Figy Berry"),
        .itemId = ITEM_FIGY_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SPICY,
        .holdEffectParam = 8,
        .description = sFigyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WIKI_BERRY] =
    {
        .name = _("Wiki Berry"),
        .itemId = ITEM_WIKI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_DRY,
        .holdEffectParam = 8,
        .description = sWikiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGO_BERRY] =
    {
        .name = _("Mago Berry"),
        .itemId = ITEM_MAGO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SWEET,
        .holdEffectParam = 8,
        .description = sMagoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AGUAV_BERRY] =
    {
        .name = _("Aguav Berry"),
        .itemId = ITEM_AGUAV_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_BITTER,
        .holdEffectParam = 8,
        .description = sAguavBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_IAPAPA_BERRY] =
    {
        .name = _("Iapapa Berry"),
        .itemId = ITEM_IAPAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CONFUSE_SOUR,
        .holdEffectParam = 8,
        .description = sIapapaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RAZZ_BERRY] =
    {
        .name = _("Razz Berry"),
        .itemId = ITEM_RAZZ_BERRY,
        .price = 20,
        .description = sRazzBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUK_BERRY] =
    {
        .name = _("Bluk Berry"),
        .itemId = ITEM_BLUK_BERRY,
        .price = 20,
        .description = sBlukBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NANAB_BERRY] =
    {
        .name = _("Nanab Berry"),
        .itemId = ITEM_NANAB_BERRY,
        .price = 20,
        .description = sNanabBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WEPEAR_BERRY] =
    {
        .name = _("Wepear Berry"),
        .itemId = ITEM_WEPEAR_BERRY,
        .price = 20,
        .description = sWepearBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINAP_BERRY] =
    {
        .name = _("Pinap Berry"),
        .itemId = ITEM_PINAP_BERRY,
        .price = 20,
        .description = sPinapBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POMEG_BERRY] =
    {
        .name = _("Pomeg Berry"),
        .itemId = ITEM_POMEG_BERRY,
        .price = 20,
        .description = sPomegBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_KELPSY_BERRY] =
    {
        .name = _("Kelpsy Berry"),
        .itemId = ITEM_KELPSY_BERRY,
        .price = 20,
        .description = sKelpsyBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_QUALOT_BERRY] =
    {
        .name = _("Qualot Berry"),
        .itemId = ITEM_QUALOT_BERRY,
        .price = 20,
        .description = sQualotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_HONDEW_BERRY] =
    {
        .name = _("Hondew Berry"),
        .itemId = ITEM_HONDEW_BERRY,
        .price = 20,
        .description = sHondewBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_GREPA_BERRY] =
    {
        .name = _("Grepa Berry"),
        .itemId = ITEM_GREPA_BERRY,
        .price = 20,
        .description = sGrepaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_TAMATO_BERRY] =
    {
        .name = _("Tamato Berry"),
        .itemId = ITEM_TAMATO_BERRY,
        .price = 20,
        .description = sTamatoBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_PARTY_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_ReduceEV,
    },

    [ITEM_CORNN_BERRY] =
    {
        .name = _("Cornn Berry"),
        .itemId = ITEM_CORNN_BERRY,
        .price = 20,
        .description = sCornnBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGOST_BERRY] =
    {
        .name = _("Magost Berry"),
        .itemId = ITEM_MAGOST_BERRY,
        .price = 20,
        .description = sMagostBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RABUTA_BERRY] =
    {
        .name = _("Rabuta Berry"),
        .itemId = ITEM_RABUTA_BERRY,
        .price = 20,
        .description = sRabutaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NOMEL_BERRY] =
    {
        .name = _("Nomel Berry"),
        .itemId = ITEM_NOMEL_BERRY,
        .price = 20,
        .description = sNomelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELON_BERRY] =
    {
        .name = _("Spelon Berry"),
        .itemId = ITEM_SPELON_BERRY,
        .price = 20,
        .description = sSpelonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PAMTRE_BERRY] =
    {
        .name = _("Pamtre Berry"),
        .itemId = ITEM_PAMTRE_BERRY,
        .price = 20,
        .description = sPamtreBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WATMEL_BERRY] =
    {
        .name = _("Watmel Berry"),
        .itemId = ITEM_WATMEL_BERRY,
        .price = 20,
        .description = sWatmelBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DURIN_BERRY] =
    {
        .name = _("Durin Berry"),
        .itemId = ITEM_DURIN_BERRY,
        .price = 20,
        .description = sDurinBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BELUE_BERRY] =
    {
        .name = _("Belue Berry"),
        .itemId = ITEM_BELUE_BERRY,
        .price = 20,
        .description = sBelueBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIECHI_BERRY] =
    {
        .name = _("Liechi Berry"),
        .itemId = ITEM_LIECHI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sLiechiBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GANLON_BERRY] =
    {
        .name = _("Ganlon Berry"),
        .itemId = ITEM_GANLON_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sGanlonBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAC_BERRY] =
    {
        .name = _("Salac Berry"),
        .itemId = ITEM_SALAC_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SPEED_UP,
        .holdEffectParam = 4,
        .description = sSalacBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PETAYA_BERRY] =
    {
        .name = _("Petaya Berry"),
        .itemId = ITEM_PETAYA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_ATTACK_UP,
        .holdEffectParam = 4,
        .description = sPetayaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_APICOT_BERRY] =
    {
        .name = _("Apicot Berry"),
        .itemId = ITEM_APICOT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_SP_DEFENSE_UP,
        .holdEffectParam = 4,
        .description = sApicotBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LANSAT_BERRY] =
    {
        .name = _("Lansat Berry"),
        .itemId = ITEM_LANSAT_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_CRITICAL_UP,
        .holdEffectParam = 4,
        .description = sLansatBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STARF_BERRY] =
    {
        .name = _("Starf Berry"),
        .itemId = ITEM_STARF_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RANDOM_STAT_UP,
        .holdEffectParam = 4,
        .description = sStarfBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ENIGMA_BERRY] =
    {
        .name = _("Enigma Berry"),
        .itemId = ITEM_ENIGMA_BERRY,
        .price = 20,
        .description = sEnigmaBerryDesc,
        .pocket = POCKET_BERRIES,
        .type = ITEM_USE_BAG_MENU, // Type handled by ItemUseOutOfBattle_EnigmaBerry
        .fieldUseFunc = ItemUseOutOfBattle_EnigmaBerry,
        .battleUsage = ITEM_B_USE_MEDICINE,
        .battleUseFunc = ItemUseInBattle_EnigmaBerry,
    },

    [ITEM_OCCA_BERRY] =
    {
        .name = _("Occa Berry"),
        .itemId = ITEM_OCCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_OccaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PASSHO_BERRY] =
    {
        .name = _("Passho Berry"),
        .itemId = ITEM_PASSHO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_PasshoBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_WACAN_BERRY] =
    {
        .name = _("Wacan Berry"),
        .itemId = ITEM_WACAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_WacanBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_RINDO_BERRY] =
    {
        .name = _("Rindo Berry"),
        .itemId = ITEM_RINDO_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_RindoBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_YACHE_BERRY] =
    {
        .name = _("Yache Berry"),
        .itemId = ITEM_YACHE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_YacheBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHOPLE_BERRY] =
    {
        .name = _("Chople Berry"),
        .itemId = ITEM_CHOPLE_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_ChopleBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KEBIA_BERRY] =
    {
        .name = _("Kebia Berry"),
        .itemId = ITEM_KEBIA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_KebiaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_SHUCA_BERRY] =
    {
        .name = _("Shuca Berry"),
        .itemId = ITEM_SHUCA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_ShucaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_COBA_BERRY] =
    {
        .name = _("Coba Berry"),
        .itemId = ITEM_COBA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_CobaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_PAYAPA_BERRY] =
    {
        .name = _("Payapa Berry"),
        .itemId = ITEM_PAYAPA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_PayapaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_TANGA_BERRY] =
    {
        .name = _("Tanga Berry"),
        .itemId = ITEM_TANGA_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_TangaBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHARTI_BERRY] =
    {
        .name = _("Charti Berry"),
        .itemId = ITEM_CHARTI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_ChartiBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_KASIB_BERRY] =
    {
        .name = _("Kasib Berry"),
        .itemId = ITEM_KASIB_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_KasibBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_HABAN_BERRY] =
    {
        .name = _("Haban Berry"),
        .itemId = ITEM_HABAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_HabanBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_COLBUR_BERRY] =
    {
        .name = _("Colbur Berry"),
        .itemId = ITEM_COLBUR_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_ColburBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_BABIRI_BERRY] =
    {
        .name = _("Babiri Berry"),
        .itemId = ITEM_BABIRI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_BabiriBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_CHILAN_BERRY] =
    {
        .name = _("Chilan Berry"),
        .itemId = ITEM_CHILAN_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_ChilanBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

    [ITEM_ROSELI_BERRY] =
    {
        .name = _("Roseli Berry"),
        .itemId = ITEM_ROSELI_BERRY,
        .price = 20,
        .holdEffect = HOLD_EFFECT_RESIST_BERRY,
        .holdEffectParam = 0,
        .description = gItemDescription_RoseliBerry,
        .pocket = POCKET_BERRIES,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .secondaryId = 0,
    },

// Hold items

    [ITEM_BRIGHT_POWDER] =
    {
        .name = _("BrightPowder"),
        .itemId = ITEM_BRIGHT_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 10,
        .description = sBrightPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WHITE_HERB] =
    {
        .name = _("White Herb"),
        .itemId = ITEM_WHITE_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_RESTORE_STATS,
        .description = sWhiteHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MACHO_BRACE] =
    {
        .name = _("Macho Brace"),
        .itemId = ITEM_MACHO_BRACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_MACHO_BRACE,
        .description = sMachoBraceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EXP_SHARE] =
    {
        .name = _("Exp. Share"),
        .itemId = ITEM_EXP_SHARE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_EXP_SHARE,
        .description = sExpShareDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_QUICK_CLAW] =
    {
        .name = _("Quick Claw"),
        .itemId = ITEM_QUICK_CLAW,
        .price = 100,
        .holdEffect = HOLD_EFFECT_QUICK_CLAW,
        .holdEffectParam = 20,
        .description = sQuickClawDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOTHE_BELL] =
    {
        .name = _("Soothe Bell"),
        .itemId = ITEM_SOOTHE_BELL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_HAPPINESS_UP,
        .description = sSootheBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MENTAL_HERB] =
    {
        .name = _("Mental Herb"),
        .itemId = ITEM_MENTAL_HERB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CURE_ATTRACT,
        .description = sMentalHerbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_BAND] =
    {
        .name = _("Choice Band"),
        .itemId = ITEM_CHOICE_BAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_CHOICE_BAND,
        .description = sChoiceBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_KINGS_ROCK] =
    {
        .name = _("King's Rock"),
        .itemId = ITEM_KINGS_ROCK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLINCH,
        .holdEffectParam = 10,
        .description = sKingsRockDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILVER_POWDER] =
    {
        .name = _("SilverPowder"),
        .itemId = ITEM_SILVER_POWDER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 10,
        .description = sSilverPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AMULET_COIN] =
    {
        .name = _("Amulet Coin"),
        .itemId = ITEM_AMULET_COIN,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DOUBLE_PRIZE,
        .holdEffectParam = 10,
        .description = sAmuletCoinDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLEANSE_TAG] =
    {
        .name = _("Cleanse Tag"),
        .itemId = ITEM_CLEANSE_TAG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_REPEL,
        .description = sCleanseTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOUL_DEW] =
    {
        .name = _("Soul Dew"),
        .itemId = ITEM_SOUL_DEW,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SOUL_DEW,
        .description = sSoulDewDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_TOOTH] =
    {
        .name = _("DeepSeaTooth"),
        .itemId = ITEM_DEEP_SEA_TOOTH,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_TOOTH,
        .description = sDeepSeaToothDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEEP_SEA_SCALE] =
    {
        .name = _("DeepSeaScale"),
        .itemId = ITEM_DEEP_SEA_SCALE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DEEP_SEA_SCALE,
        .description = sDeepSeaScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOKE_BALL] =
    {
        .name = _("Smoke Ball"),
        .itemId = ITEM_SMOKE_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CAN_ALWAYS_RUN,
        .description = sSmokeBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EVERSTONE] =
    {
        .name = _("Everstone"),
        .itemId = ITEM_EVERSTONE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PREVENT_EVOLVE,
        .description = sEverstoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FOCUS_BAND] =
    {
        .name = _("Focus Band"),
        .itemId = ITEM_FOCUS_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FOCUS_BAND,
        .holdEffectParam = 10,
        .description = sFocusBandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_EGG] =
    {
        .name = _("Lucky Egg"),
        .itemId = ITEM_LUCKY_EGG,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUCKY_EGG,
        .description = sLuckyEggDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCOPE_LENS] =
    {
        .name = _("Scope Lens"),
        .itemId = ITEM_SCOPE_LENS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SCOPE_LENS,
        .description = sScopeLensDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_COAT] =
    {
        .name = _("Metal Coat"),
        .itemId = ITEM_METAL_COAT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 10,
        .description = sMetalCoatDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LEFTOVERS] =
    {
        .name = _("Leftovers"),
        .itemId = ITEM_LEFTOVERS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LEFTOVERS,
        .holdEffectParam = 10,
        .description = sLeftoversDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_SCALE] =
    {
        .name = _("Dragon Scale"),
        .itemId = ITEM_DRAGON_SCALE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_DRAGON_SCALE,
        .holdEffectParam = 10,
        .description = sDragonScaleDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LIGHT_BALL] =
    {
        .name = _("Light Ball"),
        .itemId = ITEM_LIGHT_BALL,
        .price = 100,
        .holdEffect = HOLD_EFFECT_LIGHT_BALL,
        .description = sLightBallDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOFT_SAND] =
    {
        .name = _("Soft Sand"),
        .itemId = ITEM_SOFT_SAND,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 10,
        .description = sSoftSandDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HARD_STONE] =
    {
        .name = _("Hard Stone"),
        .itemId = ITEM_HARD_STONE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 10,
        .description = sHardStoneDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MIRACLE_SEED] =
    {
        .name = _("Miracle Seed"),
        .itemId = ITEM_MIRACLE_SEED,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 10,
        .description = sMiracleSeedDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_GLASSES] =
    {
        .name = _("BlackGlasses"),
        .itemId = ITEM_BLACK_GLASSES,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 10,
        .description = sBlackGlassesDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLACK_BELT] =
    {
        .name = _("Black Belt"),
        .itemId = ITEM_BLACK_BELT,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 10,
        .description = sBlackBeltDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MAGNET] =
    {
        .name = _("Magnet"),
        .itemId = ITEM_MAGNET,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 10,
        .description = sMagnetDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MYSTIC_WATER] =
    {
        .name = _("Mystic Water"),
        .itemId = ITEM_MYSTIC_WATER,
        .price = 100,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 10,
        .description = sMysticWaterDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARP_BEAK] =
    {
        .name = _("Sharp Beak"),
        .itemId = ITEM_SHARP_BEAK,
        .price = 100,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 10,
        .description = sSharpBeakDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_POISON_BARB] =
    {
        .name = _("Poison Barb"),
        .itemId = ITEM_POISON_BARB,
        .price = 100,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 10,
        .description = sPoisonBarbDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_NEVER_MELT_ICE] =
    {
        .name = _("NeverMeltIce"),
        .itemId = ITEM_NEVER_MELT_ICE,
        .price = 100,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 10,
        .description = sNeverMeltIceDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPELL_TAG] =
    {
        .name = _("Spell Tag"),
        .itemId = ITEM_SPELL_TAG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 10,
        .description = sSpellTagDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TWISTED_SPOON] =
    {
        .name = _("Twistedspoon"),
        .itemId = ITEM_TWISTED_SPOON,
        .price = 100,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 10,
        .description = sTwistedSpoonDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHARCOAL] =
    {
        .name = _("Charcoal"),
        .itemId = ITEM_CHARCOAL,
        .price = 9800,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 10,
        .description = sCharcoalDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DRAGON_FANG] =
    {
        .name = _("Dragon Fang"),
        .itemId = ITEM_DRAGON_FANG,
        .price = 100,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 10,
        .description = sDragonFangDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SILK_SCARF] =
    {
        .name = _("Silk Scarf"),
        .itemId = ITEM_SILK_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NORMAL_POWER,
        .holdEffectParam = 10,
        .description = sSilkScarfDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_UP_GRADE] =
    {
        .name = _("Up-Grade"),
        .itemId = ITEM_UP_GRADE,
        .price = 2100,
        .holdEffect = HOLD_EFFECT_UP_GRADE,
        .description = sUpGradeDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHELL_BELL] =
    {
        .name = _("Shell Bell"),
        .itemId = ITEM_SHELL_BELL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SHELL_BELL,
        .holdEffectParam = 8,
        .description = sShellBellDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SEA_INCENSE] =
    {
        .name = _("Sea Incense"),
        .itemId = ITEM_SEA_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 5,
        .description = sSeaIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAX_INCENSE] =
    {
        .name = _("Lax Incense"),
        .itemId = ITEM_LAX_INCENSE,
        .price = 9600,
        .holdEffect = HOLD_EFFECT_EVASION_UP,
        .holdEffectParam = 5,
        .description = sLaxIncenseDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUCKY_PUNCH] =
    {
        .name = _("Lucky Punch"),
        .itemId = ITEM_LUCKY_PUNCH,
        .price = 10,
        .holdEffect = HOLD_EFFECT_LUCKY_PUNCH,
        .description = sLuckyPunchDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAL_POWDER] =
    {
        .name = _("Metal Powder"),
        .itemId = ITEM_METAL_POWDER,
        .price = 10,
        .holdEffect = HOLD_EFFECT_METAL_POWDER,
        .description = sMetalPowderDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_THICK_CLUB] =
    {
        .name = _("Thick Club"),
        .itemId = ITEM_THICK_CLUB,
        .price = 500,
        .holdEffect = HOLD_EFFECT_THICK_CLUB,
        .description = sThickClubDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STICK] =
    {
        .name = _("Stick"),
        .itemId = ITEM_STICK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STICK,
        .description = sStickDesc,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_RED_SCARF] =
    {
        .name = _("Red Scarf"),
        .itemId = ITEM_RED_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRedScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_SCARF] =
    {
        .name = _("Blue Scarf"),
        .itemId = ITEM_BLUE_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBlueScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PINK_SCARF] =
    {
        .name = _("Pink Scarf"),
        .itemId = ITEM_PINK_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gPinkScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GREEN_SCARF] =
    {
        .name = _("Green Scarf"),
        .itemId = ITEM_GREEN_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gGreenScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_YELLOW_SCARF] =
    {
        .name = _("Yellow Scarf"),
        .itemId = ITEM_YELLOW_SCARF,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gYellowScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

// Key items

    [ITEM_MACH_BIKE] =
    {
        .name = _("Mach Bike"),
        .itemId = ITEM_MACH_BIKE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMachBikeItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_COIN_CASE] =
    {
        .name = _("Coin Case"),
        .itemId = ITEM_COIN_CASE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gCoinCaseItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CoinCase,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ITEMFINDER] =
    {
        .name = _("Itemfinder"),
        .itemId = ITEM_ITEMFINDER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gItemfinderItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Itemfinder,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_OLD_ROD] =
    {
        .name = _("Old Rod"),
        .itemId = ITEM_OLD_ROD,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gOldRodItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GOOD_ROD] =
    {
        .name = _("Good Rod"),
        .itemId = ITEM_GOOD_ROD,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gGoodRodItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 1,
    },

    [ITEM_SUPER_ROD] =
    {
        .name = _("Super Rod"),
        .itemId = ITEM_SUPER_ROD,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSuperRodItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Rod,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 2,
    },

    [ITEM_SS_TICKET] =
    {
        .name = _("S.S. Ticket"),
        .itemId = ITEM_SS_TICKET,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSSTicketItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CONTEST_PASS] =
    {
        .name = _("Contest Pass"),
        .itemId = ITEM_CONTEST_PASS,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gContestPassItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_WAILMER_PAIL] =
    {
        .name = _("Wailmer Pail"),
        .itemId = ITEM_WAILMER_PAIL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gWailmerPailItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_WailmerPail,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DEVON_GOODS] =
    {
        .name = _("Devon Goods"),
        .itemId = ITEM_DEVON_GOODS,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gDevonGoodsItemDescription,
        .importance = 2,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SOOT_SACK] =
    {
        .name = _("Soot Sack"),
        .itemId = ITEM_SOOT_SACK,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSootSackItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BASEMENT_KEY] =
    {
        .name = _("Basement Key"),
        .itemId = ITEM_BASEMENT_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBasementKeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ACRO_BIKE] =
    {
        .name = _("Acro Bike"),
        .itemId = ITEM_ACRO_BIKE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gAcroBikeItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_Bike,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 1,
    },

    [ITEM_POKEBLOCK_CASE] =
    {
        .name = _("{POKEBLOCK} CASE"),
        .itemId = ITEM_POKEBLOCK_CASE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gPokeblockCaseItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 3,
        .fieldUseFunc = ItemUseOutOfBattle_PokeblockCase,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_LETTER] =
    {
        .name = _("Letter"),
        .itemId = ITEM_LETTER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gLetterItemDescription,
        .importance = 2,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EON_TICKET] =
    {
        .name = _("Eon Ticket"),
        .itemId = ITEM_EON_TICKET,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gEonTicketItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 1,
    },

    [ITEM_RED_ORB] =
    {
        .name = _("Red Orb"),
        .itemId = ITEM_RED_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRedOrbItemDescription,
        .importance = 2,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BLUE_ORB] =
    {
        .name = _("Blue Orb"),
        .itemId = ITEM_BLUE_ORB,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBlueOrbItemDescription,
        .importance = 2,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCANNER] =
    {
        .name = _("Scanner"),
        .itemId = ITEM_SCANNER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gScannerItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GO_GOGGLES] =
    {
        .name = _("Go-Goggles"),
        .itemId = ITEM_GO_GOGGLES,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gGoGogglesItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METEORITE] =
    {
        .name = _("Meteorite"),
        .itemId = ITEM_METEORITE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMeteoriteItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_1_KEY] =
    {
        .name = _("Rm. 1 Key"),
        .itemId = ITEM_ROOM_1_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRoom1KeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_2_KEY] =
    {
        .name = _("Rm. 2 Key"),
        .itemId = ITEM_ROOM_2_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRoom2KeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_4_KEY] =
    {
        .name = _("Rm. 4 Key"),
        .itemId = ITEM_ROOM_4_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRoom4KeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOM_6_KEY] =
    {
        .name = _("Rm. 6 Key"),
        .itemId = ITEM_ROOM_6_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRoom6KeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STORAGE_KEY] =
    {
        .name = _("Storage Key"),
        .itemId = ITEM_STORAGE_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gStorageKeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ROOT_FOSSIL] =
    {
        .name = _("Root Fossil"),
        .itemId = ITEM_ROOT_FOSSIL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRootFossilItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CLAW_FOSSIL] =
    {
        .name = _("Claw Fossil"),
        .itemId = ITEM_CLAW_FOSSIL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gClawFossilItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DEVON_SCOPE] =
    {
        .name = _("Devon Scope"),
        .itemId = ITEM_DEVON_SCOPE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gDevonScopeItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

// TMs/HMs

    [ITEM_TM01_FOCUS_PUNCH] =
    {
        .name = _("TM01"),
        .itemId = ITEM_TM01_FOCUS_PUNCH,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM01ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM02_DRAGON_CLAW] =
    {
        .name = _("TM02"),
        .itemId = ITEM_TM02_DRAGON_CLAW,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM02ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM03_WATER_PULSE] =
    {
        .name = _("TM03"),
        .itemId = ITEM_TM03_WATER_PULSE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM03ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM04_CALM_MIND] =
    {
        .name = _("TM04"),
        .itemId = ITEM_TM04_CALM_MIND,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM04ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM05_ROAR] =
    {
        .name = _("TM05"),
        .itemId = ITEM_TM05_ROAR,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM05ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM06_TOXIC] =
    {
        .name = _("TM06"),
        .itemId = ITEM_TM06_TOXIC,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM06ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM07_HAIL] =
    {
        .name = _("TM07"),
        .itemId = ITEM_TM07_HAIL,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM07ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM08_BULK_UP] =
    {
        .name = _("TM08"),
        .itemId = ITEM_TM08_BULK_UP,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM08ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM09_BULLET_SEED] =
    {
        .name = _("TM09"),
        .itemId = ITEM_TM09_BULLET_SEED,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM09ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM10_HIDDEN_POWER] =
    {
        .name = _("TM10"),
        .itemId = ITEM_TM10_HIDDEN_POWER,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM10ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM11_SUNNY_DAY] =
    {
        .name = _("TM11"),
        .itemId = ITEM_TM11_SUNNY_DAY,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM11ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM12_TAUNT] =
    {
        .name = _("TM12"),
        .itemId = ITEM_TM12_TAUNT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM12ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM13_ICE_BEAM] =
    {
        .name = _("TM13"),
        .itemId = ITEM_TM13_ICE_BEAM,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM13ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM14_BLIZZARD] =
    {
        .name = _("TM14"),
        .itemId = ITEM_TM14_BLIZZARD,
        .price = 5500,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM14ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM15_HYPER_BEAM] =
    {
        .name = _("TM15"),
        .itemId = ITEM_TM15_HYPER_BEAM,
        .price = 7500,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM15ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM16_LIGHT_SCREEN] =
    {
        .name = _("TM16"),
        .itemId = ITEM_TM16_LIGHT_SCREEN,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM16ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM17_PROTECT] =
    {
        .name = _("TM17"),
        .itemId = ITEM_TM17_PROTECT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM17ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM18_RAIN_DANCE] =
    {
        .name = _("TM18"),
        .itemId = ITEM_TM18_RAIN_DANCE,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM18ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM19_GIGA_DRAIN] =
    {
        .name = _("TM19"),
        .itemId = ITEM_TM19_GIGA_DRAIN,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM19ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM20_SAFEGUARD] =
    {
        .name = _("TM20"),
        .itemId = ITEM_TM20_SAFEGUARD,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM20ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM21_FRUSTRATION] =
    {
        .name = _("TM21"),
        .itemId = ITEM_TM21_FRUSTRATION,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM21ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM22_SOLARBEAM] =
    {
        .name = _("TM22"),
        .itemId = ITEM_TM22_SOLARBEAM,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM22ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM23_IRON_TAIL] =
    {
        .name = _("TM23"),
        .itemId = ITEM_TM23_IRON_TAIL,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM23ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM24_THUNDERBOLT] =
    {
        .name = _("TM24"),
        .itemId = ITEM_TM24_THUNDERBOLT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM24ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM25_THUNDER] =
    {
        .name = _("TM25"),
        .itemId = ITEM_TM25_THUNDER,
        .price = 5500,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM25ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM26_EARTHQUAKE] =
    {
        .name = _("TM26"),
        .itemId = ITEM_TM26_EARTHQUAKE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM26ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM27_RETURN] =
    {
        .name = _("TM27"),
        .itemId = ITEM_TM27_RETURN,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM27ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM28_DIG] =
    {
        .name = _("TM28"),
        .itemId = ITEM_TM28_DIG,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM28ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM29_PSYCHIC] =
    {
        .name = _("TM29"),
        .itemId = ITEM_TM29_PSYCHIC,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM29ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM30_SHADOW_BALL] =
    {
        .name = _("TM30"),
        .itemId = ITEM_TM30_SHADOW_BALL,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM30ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM31_BRICK_BREAK] =
    {
        .name = _("TM31"),
        .itemId = ITEM_TM31_BRICK_BREAK,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM31ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM32_DOUBLE_TEAM] =
    {
        .name = _("TM32"),
        .itemId = ITEM_TM32_DOUBLE_TEAM,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM32ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM33_REFLECT] =
    {
        .name = _("TM33"),
        .itemId = ITEM_TM33_REFLECT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM33ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM34_SHOCK_WAVE] =
    {
        .name = _("TM34"),
        .itemId = ITEM_TM34_SHOCK_WAVE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM34ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM35_FLAMETHROWER] =
    {
        .name = _("TM35"),
        .itemId = ITEM_TM35_FLAMETHROWER,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM35ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM36_SLUDGE_BOMB] =
    {
        .name = _("TM36"),
        .itemId = ITEM_TM36_SLUDGE_BOMB,
        .price = 1000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM36ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM37_SANDSTORM] =
    {
        .name = _("TM37"),
        .itemId = ITEM_TM37_SANDSTORM,
        .price = 2000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM37ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM38_FIRE_BLAST] =
    {
        .name = _("TM38"),
        .itemId = ITEM_TM38_FIRE_BLAST,
        .price = 5500,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM38ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM39_ROCK_TOMB] =
    {
        .name = _("TM39"),
        .itemId = ITEM_TM39_ROCK_TOMB,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM39ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM40_AERIAL_ACE] =
    {
        .name = _("TM40"),
        .itemId = ITEM_TM40_AERIAL_ACE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM40ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM41_TORMENT] =
    {
        .name = _("TM41"),
        .itemId = ITEM_TM41_TORMENT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM41ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM42_FACADE] =
    {
        .name = _("TM42"),
        .itemId = ITEM_TM42_FACADE,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM42ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM43_SECRET_POWER] =
    {
        .name = _("TM43"),
        .itemId = ITEM_TM43_SECRET_POWER,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM43ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM44_REST] =
    {
        .name = _("TM44"),
        .itemId = ITEM_TM44_REST,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM44ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM45_ATTRACT] =
    {
        .name = _("TM45"),
        .itemId = ITEM_TM45_ATTRACT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM45ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM46_THIEF] =
    {
        .name = _("TM46"),
        .itemId = ITEM_TM46_THIEF,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM46ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM47_STEEL_WING] =
    {
        .name = _("TM47"),
        .itemId = ITEM_TM47_STEEL_WING,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM47ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM48_SKILL_SWAP] =
    {
        .name = _("TM48"),
        .itemId = ITEM_TM48_SKILL_SWAP,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM48ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM49_SNATCH] =
    {
        .name = _("TM49"),
        .itemId = ITEM_TM49_SNATCH,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM49ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM50_OVERHEAT] =
    {
        .name = _("TM50"),
        .itemId = ITEM_TM50_OVERHEAT,
        .price = 3000,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTM50ItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM01_CUT] =
    {
        .name = _("HM01"),
        .itemId = ITEM_HM01_CUT,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM01ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM02_FLY] =
    {
        .name = _("HM02"),
        .itemId = ITEM_HM02_FLY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM02ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM03_SURF] =
    {
        .name = _("HM03"),
        .itemId = ITEM_HM03_SURF,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM03ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM04_STRENGTH] =
    {
        .name = _("HM04"),
        .itemId = ITEM_HM04_STRENGTH,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM04ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM05_FLASH] =
    {
        .name = _("HM05"),
        .itemId = ITEM_HM05_FLASH,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM05ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM06_ROCK_SMASH] =
    {
        .name = _("HM06"),
        .itemId = ITEM_HM06_ROCK_SMASH,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM06ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM07_WATERFALL] =
    {
        .name = _("HM07"),
        .itemId = ITEM_HM07_WATERFALL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM07ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HM08_DIVE] =
    {
        .name = _("HM08"),
        .itemId = ITEM_HM08_DIVE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHM08ItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_TM_HM,
        .type = 1,
        .fieldUseFunc = ItemUseOutOfBattle_TMHM,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

// FireRed/LeafGreen key items

    [ITEM_OAKS_PARCEL] =
    {
        .name = _("Oak's Parcel"),
        .itemId = ITEM_OAKS_PARCEL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gOaksParcelItemDescription,
        .importance = 2,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_POKE_FLUTE] =
    {
        .name = _("Poké FLUTE"),
        .itemId = ITEM_POKE_FLUTE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gPokeFluteItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SECRET_KEY] =
    {
        .name = _("Secret Key"),
        .itemId = ITEM_SECRET_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSecretKeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BIKE_VOUCHER] =
    {
        .name = _("Bike Voucher"),
        .itemId = ITEM_BIKE_VOUCHER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBikeVoucherItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GOLD_TEETH] =
    {
        .name = _("Gold Teeth"),
        .itemId = ITEM_GOLD_TEETH,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gGoldTeethItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_OLD_AMBER] =
    {
        .name = _("Old Amber"),
        .itemId = ITEM_OLD_AMBER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gOldAmberItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_CARD_KEY] =
    {
        .name = _("Card Key"),
        .itemId = ITEM_CARD_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gCardKeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_LIFT_KEY] =
    {
        .name = _("Lift Key"),
        .itemId = ITEM_LIFT_KEY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gLiftKeyItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HELIX_FOSSIL] =
    {
        .name = _("Helix Fossil"),
        .itemId = ITEM_HELIX_FOSSIL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHelixFossilItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DOME_FOSSIL] =
    {
        .name = _("Dome Fossil"),
        .itemId = ITEM_DOME_FOSSIL,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gDomeFossilItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SILPH_SCOPE] =
    {
        .name = _("Silph Scope"),
        .itemId = ITEM_SILPH_SCOPE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSilphScopeItemDescription,
        .importance = 1,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BICYCLE] =
    {
        .name = _("Bicycle"),
        .itemId = ITEM_BICYCLE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBicycleItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TOWN_MAP] =
    {
        .name = _("Town Map"),
        .itemId = ITEM_TOWN_MAP,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTownMapItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_VS_SEEKER] =
    {
        .name = _("Vs Seeker"),
        .itemId = ITEM_VS_SEEKER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gVSSeekerItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FAME_CHECKER] =
    {
        .name = _("Fame Checker"),
        .itemId = ITEM_FAME_CHECKER,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gFameCheckerItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TM_CASE] =
    {
        .name = _("TM Case"),
        .itemId = ITEM_TM_CASE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTMCaseItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BERRY_POUCH] =
    {
        .name = _("Berry Pouch"),
        .itemId = ITEM_BERRY_POUCH,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gBerryPouchItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TEACHY_TV] =
    {
        .name = _("Teachy TV"),
        .itemId = ITEM_TEACHY_TV,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTeachyTVItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 2,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TRI_PASS] =
    {
        .name = _("Tri-Pass"),
        .itemId = ITEM_TRI_PASS,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTriPassItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_RAINBOW_PASS] =
    {
        .name = _("Rainbow Pass"),
        .itemId = ITEM_RAINBOW_PASS,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRainbowPassItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TEA] =
    {
        .name = _("Tea"),
        .itemId = ITEM_TEA,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gTeaItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MYSTIC_TICKET] =
    {
        .name = _("MysticTicket"),
        .itemId = ITEM_MYSTIC_TICKET,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMysticTicketItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_AURORA_TICKET] =
    {
        .name = _("AuroraTicket"),
        .itemId = ITEM_AURORA_TICKET,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gAuroraTicketItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_POWDER_JAR] =
    {
        .name = _("Powder Jar"),
        .itemId = ITEM_POWDER_JAR,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gPowderJarItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_PowderJar,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_RUBY] =
    {
        .name = _("Ruby"),
        .itemId = ITEM_RUBY,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gRubyItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SAPPHIRE] =
    {
        .name = _("Sapphire"),
        .itemId = ITEM_SAPPHIRE,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gSapphireItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

// Emerald-specific key items

    [ITEM_MAGMA_EMBLEM] =
    {
        .name = _("Magma Emblem"),
        .itemId = ITEM_MAGMA_EMBLEM,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMagmaEmblemItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_OLD_SEA_MAP] =
    {
        .name = _("Old Sea Map"),
        .itemId = ITEM_OLD_SEA_MAP,
        .price = 0,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gOldSeaMapItemDescription,
        .importance = 1,
        .unk19 = 1,
        .pocket = POCKET_KEY_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

// New items

    [ITEM_WIDE_LENS] =
    {
        .name = _("Wide Lens"),
        .itemId = ITEM_WIDE_LENS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_WIDE_LENS,
        .holdEffectParam = 10,
        .description = gWideLensItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MUSCLE_BAND] =
    {
        .name = _("Muscle Band"),
        .itemId = ITEM_MUSCLE_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MUSCLE_BAND,
        .holdEffectParam = 10,
        .description = gMuscleBandItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_WISE_GLASSES] =
    {
        .name = _("Wise Glasses"),
        .itemId = ITEM_WISE_GLASSES,
        .price = 200,
        .holdEffect = HOLD_EFFECT_WISE_GLASSES,
        .holdEffectParam = 10,
        .description = gWiseGlassesItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_EXPERT_BELT] =
    {
        .name = _("Expert Belt"),
        .itemId = ITEM_EXPERT_BELT,
        .price = 200,
        .holdEffect = HOLD_EFFECT_EXPERT_BELT,
        .holdEffectParam = 20,
        .description = gExpertBeltItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_LIGHT_CLAY] =
    {
        .name = _("Light Clay"),
        .itemId = ITEM_LIGHT_CLAY,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LIGHT_CLAY,
        .holdEffectParam = 0,
        .description = gLightClayItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_LIFE_ORB] =
    {
        .name = _("Life Orb"),
        .itemId = ITEM_LIFE_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LIFE_ORB,
        .holdEffectParam = 0,
        .description = gLifeOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_POWER_HERB] =
    {
        .name = _("Power Herb"),
        .itemId = ITEM_POWER_HERB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_POWER_HERB,
        .holdEffectParam = 0,
        .description = gPowerHerbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TOXIC_ORB] =
    {
        .name = _("Toxic Orb"),
        .itemId = ITEM_TOXIC_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_TOXIC_ORB,
        .holdEffectParam = 0,
        .description = gToxicOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FLAME_ORB] =
    {
        .name = _("Flame Orb"),
        .itemId = ITEM_FLAME_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FLAME_ORB,
        .holdEffectParam = 0,
        .description = gFlameOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_QUICK_POWDER] =
    {
        .name = _("Quick Powder"),
        .itemId = ITEM_QUICK_POWDER,
        .price = 200,
        .holdEffect = HOLD_EFFECT_QUICK_POWDER,
        .holdEffectParam = 0,
        .description = gQuickPowderItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FOCUS_SASH] =
    {
        .name = _("Focus Sash"),
        .itemId = ITEM_FOCUS_SASH,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FOCUS_SASH,
        .holdEffectParam = 0,
        .description = gFocusSashItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ZOOM_LENS] =
    {
        .name = _("Zoom Lens"),
        .itemId = ITEM_ZOOM_LENS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ZOOM_LENS,
        .holdEffectParam = 20,
        .description = gZoomLensItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_METRONOME] =
    {
        .name = _("Metronome"),
        .itemId = ITEM_METRONOME,
        .price = 200,
        .holdEffect = HOLD_EFFECT_METRONOME,
        .holdEffectParam = 20,
        .description = gMetronomeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_IRON_BALL] =
    {
        .name = _("Iron Ball"),
        .itemId = ITEM_IRON_BALL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_IRON_BALL,
        .holdEffectParam = 0,
        .description = gIronBallItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LAGGING_TAIL] =
    {
        .name = _("Lagging Tail"),
        .itemId = ITEM_LAGGING_TAIL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LAGGING_TAIL,
        .holdEffectParam = 0,
        .description = gLaggingTailItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DESTINY_KNOT] =
    {
        .name = _("Destiny Knot"),
        .itemId = ITEM_DESTINY_KNOT,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DESTINY_KNOT,
        .holdEffectParam = 0,
        .description = gDestinyKnotItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BLACK_SLUDGE] =
    {
        .name = _("Black Sludge"),
        .itemId = ITEM_BLACK_SLUDGE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_BLACK_SLUDGE,
        .holdEffectParam = 0,
        .description = gBlackSludgeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICY_ROCK] =
    {
        .name = _("Icy Rock"),
        .itemId = ITEM_ICY_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ICY_ROCK,
        .holdEffectParam = 0,
        .description = gIcyRockItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SMOOTH_ROCK] =
    {
        .name = _("Smooth Rock"),
        .itemId = ITEM_SMOOTH_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SMOOTH_ROCK,
        .holdEffectParam = 0,
        .description = gSmoothRockItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HEAT_ROCK] =
    {
        .name = _("Heat Rock"),
        .itemId = ITEM_HEAT_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_HEAT_ROCK,
        .holdEffectParam = 0,
        .description = gHeatRockItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DAMP_ROCK] =
    {
        .name = _("Damp Rock"),
        .itemId = ITEM_DAMP_ROCK,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DAMP_ROCK,
        .holdEffectParam = 0,
        .description = gDampRockItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GRIP_CLAW] =
    {
        .name = _("Grip Claw"),
        .itemId = ITEM_GRIP_CLAW,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GRIP_CLAW,
        .holdEffectParam = 0,
        .description = gGripClawItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CHOICE_SCARF] =
    {
        .name = _("Choice Scarf"),
        .itemId = ITEM_CHOICE_SCARF,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CHOICE_SCARF,
        .holdEffectParam = 0,
        .description = gChoiceScarfItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_STICKY_BARB] =
    {
        .name = _("Sticky Barb"),
        .itemId = ITEM_STICKY_BARB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STICKY_BARB,
        .holdEffectParam = 0,
        .description = gStickyBarbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHED_SHELL] =
    {
        .name = _("Shed Shell"),
        .itemId = ITEM_SHED_SHELL,
        .price = 200,
        .holdEffect = HOLD_EFFECT_SHED_SHELL,
        .holdEffectParam = 0,
        .description = gShedShellItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BIG_ROOT] =
    {
        .name = _("Big Root"),
        .itemId = ITEM_BIG_ROOT,
        .price = 200,
        .holdEffect = HOLD_EFFECT_BIG_ROOT,
        .holdEffectParam = 30,
        .description = gBigRootItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_CHOICE_SPECS] =
    {
        .name = _("Choice Specs"),
        .itemId = ITEM_CHOICE_SPECS,
        .price = 200,
        .holdEffect = HOLD_EFFECT_CHOICE_SPECS,
        .holdEffectParam = 0,
        .description = gChoiceSpecsItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADAMANT_ORB] =
    {
        .name = _("Adamant Orb"),
        .itemId = ITEM_ADAMANT_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ADAMANT_ORB,
        .holdEffectParam = 0,
        .description = gAdamantOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LUSTROUS_ORB] =
    {
        .name = _("Lustrous Orb"),
        .itemId = ITEM_LUSTROUS_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_LUSTROUS_ORB,
        .holdEffectParam = 0,
        .description = gLustrousOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GRISEOUS_ORB] =
    {
        .name = _("Griseous Orb"),
        .itemId = ITEM_GRISEOUS_ORB,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GRISEOUS_ORB,
        .holdEffectParam = 0,
        .description = gGriseousOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FLAME_PLATE] =
    {
        .name = _("Flame Plate"),
        .itemId = ITEM_FLAME_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FIRE_POWER,
        .holdEffectParam = 20,
        .description = gFlamePlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SPLASH_PLATE] =
    {
        .name = _("Splash Plate"),
        .itemId = ITEM_SPLASH_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_WATER_POWER,
        .holdEffectParam = 20,
        .description = gSplashPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ZAP_PLATE] =
    {
        .name = _("Zap Plate"),
        .itemId = ITEM_ZAP_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ELECTRIC_POWER,
        .holdEffectParam = 20,
        .description = gZapPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MEADOW_PLATE] =
    {
        .name = _("Meadow Plate"),
        .itemId = ITEM_MEADOW_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GRASS_POWER,
        .holdEffectParam = 20,
        .description = gMeadowPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ICICLE_PLATE] =
    {
        .name = _("Icicle Plate"),
        .itemId = ITEM_ICICLE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ICE_POWER,
        .holdEffectParam = 20,
        .description = gIciclePlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_FIST_PLATE] =
    {
        .name = _("Fist Plate"),
        .itemId = ITEM_FIST_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FIGHTING_POWER,
        .holdEffectParam = 20,
        .description = gFistPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TOXIC_PLATE] =
    {
        .name = _("Toxic Plate"),
        .itemId = ITEM_TOXIC_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_POISON_POWER,
        .holdEffectParam = 20,
        .description = gToxicPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_EARTH_PLATE] =
    {
        .name = _("Earth Plate"),
        .itemId = ITEM_EARTH_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GROUND_POWER,
        .holdEffectParam = 20,
        .description = gEarthPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SKY_PLATE] =
    {
        .name = _("Sky Plate"),
        .itemId = ITEM_SKY_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FLYING_POWER,
        .holdEffectParam = 20,
        .description = gSkyPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MIND_PLATE] =
    {
        .name = _("Mind Plate"),
        .itemId = ITEM_MIND_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_PSYCHIC_POWER,
        .holdEffectParam = 20,
        .description = gMindPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_INSECT_PLATE] =
    {
        .name = _("Insect Plate"),
        .itemId = ITEM_INSECT_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_BUG_POWER,
        .holdEffectParam = 20,
        .description = gInsectPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STONE_PLATE] =
    {
        .name = _("Stone Plate"),
        .itemId = ITEM_STONE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ROCK_POWER,
        .holdEffectParam = 20,
        .description = gStonePlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SPOOKY_PLATE] =
    {
        .name = _("Spooky Plate"),
        .itemId = ITEM_SPOOKY_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GHOST_POWER,
        .holdEffectParam = 20,
        .description = gSpookyPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DRACO_PLATE] =
    {
        .name = _("Draco Plate"),
        .itemId = ITEM_DRACO_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRAGON_POWER,
        .holdEffectParam = 20,
        .description = gDracoPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DREAD_PLATE] =
    {
        .name = _("Dread Plate"),
        .itemId = ITEM_DREAD_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DARK_POWER,
        .holdEffectParam = 20,
        .description = gDreadPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_IRON_PLATE] =
    {
        .name = _("Iron Plate"),
        .itemId = ITEM_IRON_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_STEEL_POWER,
        .holdEffectParam = 20,
        .description = gIronPlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_EVIOLITE] =
    {
        .name = _("Eviolite"),
        .itemId = ITEM_EVIOLITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_EVIOLITE,
        .holdEffectParam = 50,
        .description = gEvioliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FLOAT_STONE] =
    {
        .name = _("Float Stone"),
        .itemId = ITEM_FLOAT_STONE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FLOAT_STONE,
        .holdEffectParam = 0,
        .description = gFloatStoneItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BINDING_BAND] =
    {
        .name = _("Binding Band"),
        .itemId = ITEM_BINDING_BAND,
        .price = 200,
        .holdEffect = HOLD_EFFECT_BINDING_BAND,
        .holdEffectParam = 0,
        .description = gBindingBandItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DOUSE_DRIVE] =
    {
        .name = _("Douse Drive"),
        .itemId = ITEM_DOUSE_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .holdEffectParam = 0,
        .description = gDouseDriveItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SHOCK_DRIVE] =
    {
        .name = _("Shock Drive"),
        .itemId = ITEM_SHOCK_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .holdEffectParam = 0,
        .description = gShockDriveItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BURN_DRIVE] =
    {
        .name = _("Burn Drive"),
        .itemId = ITEM_BURN_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .holdEffectParam = 0,
        .description = gBurnDriveItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_CHILL_DRIVE] =
    {
        .name = _("Chill Drive"),
        .itemId = ITEM_CHILL_DRIVE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_DRIVE,
        .holdEffectParam = 0,
        .description = gChillDriveItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FIRE_GEM] =
    {
        .name = _("Fire Gem"),
        .itemId = ITEM_FIRE_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gFireGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_WATER_GEM] =
    {
        .name = _("Water Gem"),
        .itemId = ITEM_WATER_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gWaterGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ELECTRIC_GEM] =
    {
        .name = _("Electric Gem"),
        .itemId = ITEM_ELECTRIC_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gElectricGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GRASS_GEM] =
    {
        .name = _("Grass Gem"),
        .itemId = ITEM_GRASS_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gGrassGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ICE_GEM] =
    {
        .name = _("Ice Gem"),
        .itemId = ITEM_ICE_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gIceGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FIGHTING_GEM] =
    {
        .name = _("Fighting Gem"),
        .itemId = ITEM_FIGHTING_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gFightingGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_POISON_GEM] =
    {
        .name = _("Poison Gem"),
        .itemId = ITEM_POISON_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gPoisonGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GROUND_GEM] =
    {
        .name = _("Ground Gem"),
        .itemId = ITEM_GROUND_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gGroundGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FLYING_GEM] =
    {
        .name = _("Flying Gem"),
        .itemId = ITEM_FLYING_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gFlyingGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_PSYCHIC_GEM] =
    {
        .name = _("Psychic Gem"),
        .itemId = ITEM_PSYCHIC_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gPsychicGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BUG_GEM] =
    {
        .name = _("Bug Gem"),
        .itemId = ITEM_BUG_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gBugGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ROCK_GEM] =
    {
        .name = _("Rock Gem"),
        .itemId = ITEM_ROCK_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gRockGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GHOST_GEM] =
    {
        .name = _("Ghost Gem"),
        .itemId = ITEM_GHOST_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gGhostGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DRAGON_GEM] =
    {
        .name = _("Dragon Gem"),
        .itemId = ITEM_DRAGON_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gDragonGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_DARK_GEM] =
    {
        .name = _("Dark Gem"),
        .itemId = ITEM_DARK_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gDarkGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_STEEL_GEM] =
    {
        .name = _("Steel Gem"),
        .itemId = ITEM_STEEL_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gSteelGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_NORMAL_GEM] =
    {
        .name = _("Normal Gem"),
        .itemId = ITEM_NORMAL_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gNormalGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_FAIRY_GEM] =
    {
        .name = _("Fairy Gem"),
        .itemId = ITEM_FAIRY_GEM,
        .price = 200,
        .holdEffect = HOLD_EFFECT_GEMS,
        .holdEffectParam = 0,
        .description = gFairyGemItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ASSAULT_VEST] =
    {
        .name = _("Assault Vest"),
        .itemId = ITEM_ASSAULT_VEST,
        .price = 200,
        .holdEffect = HOLD_EFFECT_ASSAULT_VEST,
        .holdEffectParam = 50,
        .description = gAssaultVestItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_PIXIE_PLATE] =
    {
        .name = _("Pixie Plate"),
        .itemId = ITEM_PIXIE_PLATE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_FAIRY_POWER,
        .holdEffectParam = 20,
        .description = gPixiePlateItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SAFETY_GOGGLES] =
    {
        .name = _("SafetyGoggles"),
        .itemId = ITEM_SAFETY_GOGGLES,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SAFETY_GOOGLES,
        .holdEffectParam = 0,
        .description = gSafetyGogglesItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GENGARITE] =
    {
        .name = _("Gengarite"),
        .itemId = ITEM_GENGARITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGengariteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GARDEVOIRITE] =
    {
        .name = _("Gardevoirite"),
        .itemId = ITEM_GARDEVOIRITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGardevoiriteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_AMPHAROSITE] =
    {
        .name = _("Ampharosite"),
        .itemId = ITEM_AMPHAROSITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAmpharositeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_VENUSAURITE] =
    {
        .name = _("Venusaurite"),
        .itemId = ITEM_VENUSAURITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gVenusauriteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_CHARIZARDITE_X] =
    {
        .name = _("CharizarditeX"),
        .itemId = ITEM_CHARIZARDITE_X,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gCharizarditeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BLASTOISINITE] =
    {
        .name = _("Blastoisinite"),
        .itemId = ITEM_BLASTOISINITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gBlastoisiniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MEWTWONITE_X] =
    {
        .name = _("Mewtwonite X"),
        .itemId = ITEM_MEWTWONITE_X,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gMewtwoniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MEWTWONITE_Y] =
    {
        .name = _("Mewtwonite Y"),
        .itemId = ITEM_MEWTWONITE_Y,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gMewtwoniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BLAZIKENITE] =
    {
        .name = _("Blazikenite"),
        .itemId = ITEM_BLAZIKENITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gBlazikeniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MEDICHAMITE] =
    {
        .name = _("Medichamite"),
        .itemId = ITEM_MEDICHAMITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gMedichamiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HOUNDOOMINITE] =
    {
        .name = _("Houndoominite"),
        .itemId = ITEM_HOUNDOOMINITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gHoundoominiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_AGGRONITE] =
    {
        .name = _("Aggronite"),
        .itemId = ITEM_AGGRONITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAggroniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_BANETTITE] =
    {
        .name = _("Banettite"),
        .itemId = ITEM_BANETTITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gBanettiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_TYRANITARITE] =
    {
        .name = _("Tyranitarite"),
        .itemId = ITEM_TYRANITARITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gTyranitariteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_SCIZORITE] =
    {
        .name = _("Scizorite"),
        .itemId = ITEM_SCIZORITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gScizoriteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_PINSIRITE] =
    {
        .name = _("Pinsirite"),
        .itemId = ITEM_PINSIRITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gPinsiriteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_AERODACTYLITE] =
    {
        .name = _("Aerodactylite"),
        .itemId = ITEM_AERODACTYLITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAerodactyliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_LUCARIONITE] =
    {
        .name = _("Lucarionite"),
        .itemId = ITEM_LUCARIONITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gLucarioniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ABOMASITE] =
    {
        .name = _("Abomasite"),
        .itemId = ITEM_ABOMASITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAbomasiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_KANGASKHANITE] =
    {
        .name = _("Kangaskhanite"),
        .itemId = ITEM_KANGASKHANITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gKangaskhaniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_GYARADOSITE] =
    {
        .name = _("Gyaradosite"),
        .itemId = ITEM_GYARADOSITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGyaradositeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ABSOLITE] =
    {
        .name = _("Absolite"),
        .itemId = ITEM_ABSOLITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAbsoliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_CHARIZARDITE_Y] =
    {
        .name = _("CharizarditeY"),
        .itemId = ITEM_CHARIZARDITE_Y,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gCharizarditeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_ALAKAZITE] =
    {
        .name = _("Alakazite"),
        .itemId = ITEM_ALAKAZITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAlakaziteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_HERACRONITE] =
    {
        .name = _("Heracronite"),
        .itemId = ITEM_HERACRONITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gHeracroniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MAWILITE] =
    {
        .name = _("Mawilite"),
        .itemId = ITEM_MAWILITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gMawiliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MANECTITE] =
    {
        .name = _("Manectite"),
        .itemId = ITEM_MANECTITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gManectiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GARCHOMPITE] =
    {
        .name = _("Garchompite"),
        .itemId = ITEM_GARCHOMPITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGarchompiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIASITE] =
    {
        .name = _("Latiasite"),
        .itemId = ITEM_LATIASITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gLatiasiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LATIOSITE] =
    {
        .name = _("Latiosite"),
        .itemId = ITEM_LATIOSITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gLatiositeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SWAMPERTITE] =
    {
        .name = _("Swampertite"),
        .itemId = ITEM_SWAMPERTITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSwampertiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SCEPTILITE] =
    {
        .name = _("Sceptilite"),
        .itemId = ITEM_SCEPTILITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSceptiliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SABLENITE] =
    {
        .name = _("Sablenite"),
        .itemId = ITEM_SABLENITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSableniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ALTARIANITE] =
    {
        .name = _("Altarianite"),
        .itemId = ITEM_ALTARIANITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAltarianiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GALLADITE] =
    {
        .name = _("Galladite"),
        .itemId = ITEM_GALLADITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGalladiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_AUDINITE] =
    {
        .name = _("Audinite"),
        .itemId = ITEM_AUDINITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gAudiniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_METAGROSSITE] =
    {
        .name = _("Metagrossite"),
        .itemId = ITEM_METAGROSSITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gMetagrossiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SHARPEDONITE] =
    {
        .name = _("Sharpedonite"),
        .itemId = ITEM_SHARPEDONITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSharpedoniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SLOWBRONITE] =
    {
        .name = _("Slowbronite"),
        .itemId = ITEM_SLOWBRONITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSlowbroniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_STEELIXITE] =
    {
        .name = _("Steelixite"),
        .itemId = ITEM_STEELIXITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSteelixiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PIDGEOTITE] =
    {
        .name = _("Pidgeotite"),
        .itemId = ITEM_PIDGEOTITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gPidgeotiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GLALITITE] =
    {
        .name = _("Glalitite"),
        .itemId = ITEM_GLALITITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gGlalititeItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_DIANCITE] =
    {
        .name = _("Diancite"),
        .itemId = ITEM_DIANCITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gDianciteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_CAMERUPTITE] =
    {
        .name = _("Cameruptite"),
        .itemId = ITEM_CAMERUPTITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gCameruptiteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_LOPUNNITE] =
    {
        .name = _("Lopunnite"),
        .itemId = ITEM_LOPUNNITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gLopunniteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_SALAMENCITE] =
    {
        .name = _("Salamencite"),
        .itemId = ITEM_SALAMENCITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gSalamenciteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_BEEDRILLITE] =
    {
        .name = _("Beedrillite"),
        .itemId = ITEM_BEEDRILLITE,
        .price = 200,
        .holdEffect = HOLD_EFFECT_MEGA_STONE,
        .holdEffectParam = 0,
        .description = gBeedrilliteItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_MEGA_BRACELET] =
    {
        .name = _("Mega Bracelet"),
        .itemId = ITEM_MEGA_BRACELET,
        .price = 200,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gMegaBraceletItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_KEY_ITEMS,
        .type = ITEM_USE_BAG_MENU,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PROTECTIVE_PADS] =
    {
        .name = _("Protect Pads"), // Shortened name from Protective Pads
        .itemId = ITEM_PROTECTIVE_PADS,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_PROTECTIVE_PADS,
        .holdEffectParam = 0,
        .description = gProtectPadsItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_TERRAIN_EXTENDER] =
    {
        .name = _("Terrain Exte."),
        .itemId = ITEM_TERRAIN_EXTENDER,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_TERRAIN_EXTENDER,
        .holdEffectParam = 0,
        .description = gTerrainExtenderItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ELECTRIC_SEED] =
    {
        .name = _("Electric Seed"),
        .itemId = ITEM_ELECTRIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = 0,
        .description = gElectricSeedItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_GRASSY_SEED] =
    {
        .name = _("Grassy Seed"),
        .itemId = ITEM_GRASSY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = 0,
        .description = gGrassySeedItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    },

    [ITEM_MISTY_SEED] =
    {
        .name = _("Misty Seed"),
        .itemId = ITEM_MISTY_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = 0,
        .description = gMistySeedItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_PSYCHIC_SEED] =
    {
        .name = _("Psychic Seed"),
        .itemId = ITEM_PSYCHIC_SEED,
        .price = 4000,
        .holdEffect = HOLD_EFFECT_SEEDS,
        .holdEffectParam = 0,
        .description = gPsychicSeedItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_ADRENALINE_ORB] =
    {
        .name = _("AdrenalineOrb"),
        .itemId = ITEM_ADRENALINE_ORB,
        .price = 300,
        .holdEffect = HOLD_EFFECT_ADRENALINE_ORB,
        .holdEffectParam = 0,
        .description = gAdrenalineOrbItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
    },

    [ITEM_HONEY] =
    {
        .name = _("Honey"),
        .itemId = ITEM_HONEY,
        .price = 100,
        .holdEffect = HOLD_EFFECT_NONE,
        .holdEffectParam = 0,
        .description = gHoneyItemDescription,
        .importance = 0,
        .unk19 = 0,
        .pocket = POCKET_ITEMS,
        .type = 4,
        .fieldUseFunc = ItemUseOutOfBattle_CannotUse,
        .battleUsage = 0,
        .battleUseFunc = NULL,
        .secondaryId = 0,
    }
};
