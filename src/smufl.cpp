/////////////////////////////////////////////////////////////////////////////
// Name:        smufl.cpp
// Author:      Laurent Pugin
// Created:     2021
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// NOTE: this file was generated by the ./fonts/generate-cpp.xsl script and
// should not be edited because changes will be lost.
/////////////////////////////////////////////////////////////////////////////

#include "smufl.h"

//----------------------------------------------------------------------------

#include "vrv.h"

namespace vrv {

//----------------------------------------------------------------------------
// A map for the SMUFL names and the glyphs available in Verovio
//----------------------------------------------------------------------------

const std::map<std::string, wchar_t> Resources::s_smuflNames = {
    { "brace", SMUFL_E000_brace },
    { "bracketTop", SMUFL_E003_bracketTop },
    { "bracketBottom", SMUFL_E004_bracketBottom },
    { "dalSegno", SMUFL_E045_dalSegno },
    { "daCapo", SMUFL_E046_daCapo },
    { "segno", SMUFL_E047_segno },
    { "coda", SMUFL_E048_coda },
    { "segnoSerpent2", SMUFL_E04B_segnoSerpent2 },
    { "gClef", SMUFL_E050_gClef },
    { "gClef15mb", SMUFL_E051_gClef15mb },
    { "gClef8vb", SMUFL_E052_gClef8vb },
    { "gClef8va", SMUFL_E053_gClef8va },
    { "gClef15ma", SMUFL_E054_gClef15ma },
    { "gClef8vbOld", SMUFL_E055_gClef8vbOld },
    { "gClef8vbCClef", SMUFL_E056_gClef8vbCClef },
    { "cClef", SMUFL_E05C_cClef },
    { "cClef8vb", SMUFL_E05D_cClef8vb },
    { "fClef", SMUFL_E062_fClef },
    { "fClef15mb", SMUFL_E063_fClef15mb },
    { "fClef8vb", SMUFL_E064_fClef8vb },
    { "fClef8va", SMUFL_E065_fClef8va },
    { "fClef15ma", SMUFL_E066_fClef15ma },
    { "unpitchedPercussionClef1", SMUFL_E069_unpitchedPercussionClef1 },
    { "unpitchedPercussionClef2", SMUFL_E06A_unpitchedPercussionClef2 },
    { "gClefReversed", SMUFL_E073_gClefReversed },
    { "gClefTurned", SMUFL_E074_gClefTurned },
    { "cClefReversed", SMUFL_E075_cClefReversed },
    { "fClefReversed", SMUFL_E076_fClefReversed },
    { "fClefTurned", SMUFL_E077_fClefTurned },
    { "timeSig0", SMUFL_E080_timeSig0 },
    { "timeSig1", SMUFL_E081_timeSig1 },
    { "timeSig2", SMUFL_E082_timeSig2 },
    { "timeSig3", SMUFL_E083_timeSig3 },
    { "timeSig4", SMUFL_E084_timeSig4 },
    { "timeSig5", SMUFL_E085_timeSig5 },
    { "timeSig6", SMUFL_E086_timeSig6 },
    { "timeSig7", SMUFL_E087_timeSig7 },
    { "timeSig8", SMUFL_E088_timeSig8 },
    { "timeSig9", SMUFL_E089_timeSig9 },
    { "timeSigCommon", SMUFL_E08A_timeSigCommon },
    { "timeSigCutCommon", SMUFL_E08B_timeSigCutCommon },
    { "timeSigPlus", SMUFL_E08C_timeSigPlus },
    { "timeSigPlusSmall", SMUFL_E08D_timeSigPlusSmall },
    { "noteheadWhole", SMUFL_E0A2_noteheadWhole },
    { "noteheadHalf", SMUFL_E0A3_noteheadHalf },
    { "noteheadBlack", SMUFL_E0A4_noteheadBlack },
    { "noteheadNull", SMUFL_E0A5_noteheadNull },
    { "noteheadXBlack", SMUFL_E0A9_noteheadXBlack },
    { "noteheadPlusBlack", SMUFL_E0AF_noteheadPlusBlack },
    { "noteheadWholeWithX", SMUFL_E0B5_noteheadWholeWithX },
    { "noteheadHalfWithX", SMUFL_E0B6_noteheadHalfWithX },
    { "noteheadVoidWithX", SMUFL_E0B7_noteheadVoidWithX },
    { "noteheadDiamondHalf", SMUFL_E0D9_noteheadDiamondHalf },
    { "noteheadDiamondHalfWide", SMUFL_E0DA_noteheadDiamondHalfWide },
    { "noteheadDiamondBlack", SMUFL_E0DB_noteheadDiamondBlack },
    { "noteheadDiamondBlackWide", SMUFL_E0DC_noteheadDiamondBlackWide },
    { "noteheadDiamondWhite", SMUFL_E0DD_noteheadDiamondWhite },
    { "noteheadDiamondWhiteWide", SMUFL_E0DE_noteheadDiamondWhiteWide },
    { "noteheadParenthesisLeft", SMUFL_E0F5_noteheadParenthesisLeft },
    { "noteheadParenthesisRight", SMUFL_E0F6_noteheadParenthesisRight },
    { "noteheadWholeFilled", SMUFL_E0FA_noteheadWholeFilled },
    { "noteheadSlashHorizontalEnds", SMUFL_E101_noteheadSlashHorizontalEnds },
    { "noteheadSlashWhiteWhole", SMUFL_E102_noteheadSlashWhiteWhole },
    { "noteheadSlashWhiteHalf", SMUFL_E103_noteheadSlashWhiteHalf },
    { "tremolo1", SMUFL_E220_tremolo1 },
    { "tremolo2", SMUFL_E221_tremolo2 },
    { "tremolo3", SMUFL_E222_tremolo3 },
    { "tremolo4", SMUFL_E223_tremolo4 },
    { "tremolo5", SMUFL_E224_tremolo5 },
    { "buzzRoll", SMUFL_E22A_buzzRoll },
    { "flag8thUp", SMUFL_E240_flag8thUp },
    { "flag8thDown", SMUFL_E241_flag8thDown },
    { "flag16thUp", SMUFL_E242_flag16thUp },
    { "flag16thDown", SMUFL_E243_flag16thDown },
    { "flag32ndUp", SMUFL_E244_flag32ndUp },
    { "flag32ndDown", SMUFL_E245_flag32ndDown },
    { "flag64thUp", SMUFL_E246_flag64thUp },
    { "flag64thDown", SMUFL_E247_flag64thDown },
    { "flag128thUp", SMUFL_E248_flag128thUp },
    { "flag128thDown", SMUFL_E249_flag128thDown },
    { "flag256thUp", SMUFL_E24A_flag256thUp },
    { "flag256thDown", SMUFL_E24B_flag256thDown },
    { "flag512thUp", SMUFL_E24C_flag512thUp },
    { "flag512thDown", SMUFL_E24D_flag512thDown },
    { "flag1024thUp", SMUFL_E24E_flag1024thUp },
    { "flag1024thDown", SMUFL_E24F_flag1024thDown },
    { "accidentalFlat", SMUFL_E260_accidentalFlat },
    { "accidentalNatural", SMUFL_E261_accidentalNatural },
    { "accidentalSharp", SMUFL_E262_accidentalSharp },
    { "accidentalDoubleSharp", SMUFL_E263_accidentalDoubleSharp },
    { "accidentalDoubleFlat", SMUFL_E264_accidentalDoubleFlat },
    { "accidentalTripleSharp", SMUFL_E265_accidentalTripleSharp },
    { "accidentalTripleFlat", SMUFL_E266_accidentalTripleFlat },
    { "accidentalNaturalFlat", SMUFL_E267_accidentalNaturalFlat },
    { "accidentalNaturalSharp", SMUFL_E268_accidentalNaturalSharp },
    { "accidentalSharpSharp", SMUFL_E269_accidentalSharpSharp },
    { "accidentalParensLeft", SMUFL_E26A_accidentalParensLeft },
    { "accidentalParensRight", SMUFL_E26B_accidentalParensRight },
    { "accidentalBracketLeft", SMUFL_E26C_accidentalBracketLeft },
    { "accidentalBracketRight", SMUFL_E26D_accidentalBracketRight },
    { "accidentalQuarterToneFlatArrowUp", SMUFL_E270_accidentalQuarterToneFlatArrowUp },
    { "accidentalThreeQuarterTonesFlatArrowDown", SMUFL_E271_accidentalThreeQuarterTonesFlatArrowDown },
    { "accidentalQuarterToneSharpNaturalArrowUp", SMUFL_E272_accidentalQuarterToneSharpNaturalArrowUp },
    { "accidentalQuarterToneFlatNaturalArrowDown", SMUFL_E273_accidentalQuarterToneFlatNaturalArrowDown },
    { "accidentalThreeQuarterTonesSharpArrowUp", SMUFL_E274_accidentalThreeQuarterTonesSharpArrowUp },
    { "accidentalQuarterToneSharpArrowDown", SMUFL_E275_accidentalQuarterToneSharpArrowDown },
    { "accidentalQuarterToneFlatStein", SMUFL_E280_accidentalQuarterToneFlatStein },
    { "accidentalThreeQuarterTonesFlatZimmermann", SMUFL_E281_accidentalThreeQuarterTonesFlatZimmermann },
    { "accidentalQuarterToneSharpStein", SMUFL_E282_accidentalQuarterToneSharpStein },
    { "accidentalThreeQuarterTonesSharpStein", SMUFL_E283_accidentalThreeQuarterTonesSharpStein },
    { "accidentalBuyukMucennebFlat", SMUFL_E440_accidentalBuyukMucennebFlat },
    { "accidentalKucukMucennebFlat", SMUFL_E441_accidentalKucukMucennebFlat },
    { "accidentalBakiyeFlat", SMUFL_E442_accidentalBakiyeFlat },
    { "accidentalKomaFlat", SMUFL_E443_accidentalKomaFlat },
    { "accidentalKomaSharp", SMUFL_E444_accidentalKomaSharp },
    { "accidentalBakiyeSharp", SMUFL_E445_accidentalBakiyeSharp },
    { "accidentalKucukMucennebSharp", SMUFL_E446_accidentalKucukMucennebSharp },
    { "accidentalBuyukMucennebSharp", SMUFL_E447_accidentalBuyukMucennebSharp },
    { "articAccentAbove", SMUFL_E4A0_articAccentAbove },
    { "articAccentBelow", SMUFL_E4A1_articAccentBelow },
    { "articStaccatoAbove", SMUFL_E4A2_articStaccatoAbove },
    { "articStaccatoBelow", SMUFL_E4A3_articStaccatoBelow },
    { "articTenutoAbove", SMUFL_E4A4_articTenutoAbove },
    { "articTenutoBelow", SMUFL_E4A5_articTenutoBelow },
    { "articStaccatissimoAbove", SMUFL_E4A6_articStaccatissimoAbove },
    { "articStaccatissimoBelow", SMUFL_E4A7_articStaccatissimoBelow },
    { "articStaccatissimoWedgeAbove", SMUFL_E4A8_articStaccatissimoWedgeAbove },
    { "articStaccatissimoWedgeBelow", SMUFL_E4A9_articStaccatissimoWedgeBelow },
    { "articStaccatissimoStrokeAbove", SMUFL_E4AA_articStaccatissimoStrokeAbove },
    { "articStaccatissimoStrokeBelow", SMUFL_E4AB_articStaccatissimoStrokeBelow },
    { "articMarcatoAbove", SMUFL_E4AC_articMarcatoAbove },
    { "articMarcatoBelow", SMUFL_E4AD_articMarcatoBelow },
    { "articMarcatoStaccatoAbove", SMUFL_E4AE_articMarcatoStaccatoAbove },
    { "articMarcatoStaccatoBelow", SMUFL_E4AF_articMarcatoStaccatoBelow },
    { "articAccentStaccatoAbove", SMUFL_E4B0_articAccentStaccatoAbove },
    { "articAccentStaccatoBelow", SMUFL_E4B1_articAccentStaccatoBelow },
    { "articTenutoStaccatoAbove", SMUFL_E4B2_articTenutoStaccatoAbove },
    { "articTenutoStaccatoBelow", SMUFL_E4B3_articTenutoStaccatoBelow },
    { "articTenutoAccentAbove", SMUFL_E4B4_articTenutoAccentAbove },
    { "articTenutoAccentBelow", SMUFL_E4B5_articTenutoAccentBelow },
    { "articStressAbove", SMUFL_E4B6_articStressAbove },
    { "articStressBelow", SMUFL_E4B7_articStressBelow },
    { "articUnstressAbove", SMUFL_E4B8_articUnstressAbove },
    { "articUnstressBelow", SMUFL_E4B9_articUnstressBelow },
    { "articLaissezVibrerAbove", SMUFL_E4BA_articLaissezVibrerAbove },
    { "articLaissezVibrerBelow", SMUFL_E4BB_articLaissezVibrerBelow },
    { "articMarcatoTenutoAbove", SMUFL_E4BC_articMarcatoTenutoAbove },
    { "articMarcatoTenutoBelow", SMUFL_E4BD_articMarcatoTenutoBelow },
    { "fermataAbove", SMUFL_E4C0_fermataAbove },
    { "fermataBelow", SMUFL_E4C1_fermataBelow },
    { "fermataVeryShortAbove", SMUFL_E4C2_fermataVeryShortAbove },
    { "fermataVeryShortBelow", SMUFL_E4C3_fermataVeryShortBelow },
    { "fermataShortAbove", SMUFL_E4C4_fermataShortAbove },
    { "fermataShortBelow", SMUFL_E4C5_fermataShortBelow },
    { "fermataLongAbove", SMUFL_E4C6_fermataLongAbove },
    { "fermataLongBelow", SMUFL_E4C7_fermataLongBelow },
    { "fermataVeryLongAbove", SMUFL_E4C8_fermataVeryLongAbove },
    { "fermataVeryLongBelow", SMUFL_E4C9_fermataVeryLongBelow },
    { "breathMarkComma", SMUFL_E4CE_breathMarkComma },
    { "restMaxima", SMUFL_E4E0_restMaxima },
    { "restLonga", SMUFL_E4E1_restLonga },
    { "restDoubleWhole", SMUFL_E4E2_restDoubleWhole },
    { "restWhole", SMUFL_E4E3_restWhole },
    { "restHalf", SMUFL_E4E4_restHalf },
    { "restQuarter", SMUFL_E4E5_restQuarter },
    { "rest8th", SMUFL_E4E6_rest8th },
    { "rest16th", SMUFL_E4E7_rest16th },
    { "rest32nd", SMUFL_E4E8_rest32nd },
    { "rest64th", SMUFL_E4E9_rest64th },
    { "rest128th", SMUFL_E4EA_rest128th },
    { "rest256th", SMUFL_E4EB_rest256th },
    { "rest512th", SMUFL_E4EC_rest512th },
    { "rest1024th", SMUFL_E4ED_rest1024th },
    { "repeat1Bar", SMUFL_E500_repeat1Bar },
    { "repeat2Bars", SMUFL_E501_repeat2Bars },
    { "repeat4Bars", SMUFL_E502_repeat4Bars },
    { "ottava", SMUFL_E510_ottava },
    { "ottavaAlta", SMUFL_E511_ottavaAlta },
    { "ottavaBassa", SMUFL_E512_ottavaBassa },
    { "ottavaBassaBa", SMUFL_E513_ottavaBassaBa },
    { "quindicesima", SMUFL_E514_quindicesima },
    { "quindicesimaAlta", SMUFL_E515_quindicesimaAlta },
    { "quindicesimaBassa", SMUFL_E516_quindicesimaBassa },
    { "ventiduesima", SMUFL_E517_ventiduesima },
    { "ventiduesimaAlta", SMUFL_E518_ventiduesimaAlta },
    { "ventiduesimaBassa", SMUFL_E519_ventiduesimaBassa },
    { "octaveParensLeft", SMUFL_E51A_octaveParensLeft },
    { "octaveParensRight", SMUFL_E51B_octaveParensRight },
    { "dynamicPiano", SMUFL_E520_dynamicPiano },
    { "dynamicMezzo", SMUFL_E521_dynamicMezzo },
    { "dynamicForte", SMUFL_E522_dynamicForte },
    { "dynamicRinforzando", SMUFL_E523_dynamicRinforzando },
    { "dynamicSforzando", SMUFL_E524_dynamicSforzando },
    { "dynamicZ", SMUFL_E525_dynamicZ },
    { "dynamicNiente", SMUFL_E526_dynamicNiente },
    { "dynamicPPPPPP", SMUFL_E527_dynamicPPPPPP },
    { "dynamicPPPPP", SMUFL_E528_dynamicPPPPP },
    { "dynamicPPPP", SMUFL_E529_dynamicPPPP },
    { "dynamicPPP", SMUFL_E52A_dynamicPPP },
    { "dynamicPP", SMUFL_E52B_dynamicPP },
    { "dynamicMP", SMUFL_E52C_dynamicMP },
    { "dynamicMF", SMUFL_E52D_dynamicMF },
    { "dynamicPF", SMUFL_E52E_dynamicPF },
    { "dynamicFF", SMUFL_E52F_dynamicFF },
    { "dynamicFFF", SMUFL_E530_dynamicFFF },
    { "dynamicFFFF", SMUFL_E531_dynamicFFFF },
    { "dynamicFFFFF", SMUFL_E532_dynamicFFFFF },
    { "dynamicFFFFFF", SMUFL_E533_dynamicFFFFFF },
    { "dynamicFortePiano", SMUFL_E534_dynamicFortePiano },
    { "dynamicForzando", SMUFL_E535_dynamicForzando },
    { "dynamicSforzando1", SMUFL_E536_dynamicSforzando1 },
    { "dynamicSforzandoPiano", SMUFL_E537_dynamicSforzandoPiano },
    { "dynamicSforzandoPianissimo", SMUFL_E538_dynamicSforzandoPianissimo },
    { "dynamicSforzato", SMUFL_E539_dynamicSforzato },
    { "dynamicSforzatoPiano", SMUFL_E53A_dynamicSforzatoPiano },
    { "dynamicSforzatoFF", SMUFL_E53B_dynamicSforzatoFF },
    { "dynamicRinforzando1", SMUFL_E53C_dynamicRinforzando1 },
    { "dynamicRinforzando2", SMUFL_E53D_dynamicRinforzando2 },
    { "ornamentTrill", SMUFL_E566_ornamentTrill },
    { "ornamentTurn", SMUFL_E567_ornamentTurn },
    { "ornamentTurnInverted", SMUFL_E568_ornamentTurnInverted },
    { "ornamentTurnSlash", SMUFL_E569_ornamentTurnSlash },
    { "ornamentTurnUp", SMUFL_E56A_ornamentTurnUp },
    { "ornamentTurnUpS", SMUFL_E56B_ornamentTurnUpS },
    { "ornamentShortTrill", SMUFL_E56C_ornamentShortTrill },
    { "ornamentMordent", SMUFL_E56D_ornamentMordent },
    { "ornamentTremblement", SMUFL_E56E_ornamentTremblement },
    { "ornamentHaydn", SMUFL_E56F_ornamentHaydn },
    { "ornamentVerticalLine", SMUFL_E583_ornamentVerticalLine },
    { "ornamentSchleifer", SMUFL_E587_ornamentSchleifer },
    { "ornamentZigZagLineNoRightEnd", SMUFL_E59D_ornamentZigZagLineNoRightEnd },
    { "ornamentZigZagLineWithRightEnd", SMUFL_E59E_ornamentZigZagLineWithRightEnd },
    { "ornamentPrecompSlide", SMUFL_E5B0_ornamentPrecompSlide },
    { "ornamentPrecompDescendingSlide", SMUFL_E5B1_ornamentPrecompDescendingSlide },
    { "ornamentPrecompAppoggTrill", SMUFL_E5B2_ornamentPrecompAppoggTrill },
    { "ornamentPrecompAppoggTrillSuffix", SMUFL_E5B3_ornamentPrecompAppoggTrillSuffix },
    { "ornamentPrecompTurnTrillDAnglebert", SMUFL_E5B4_ornamentPrecompTurnTrillDAnglebert },
    { "ornamentPrecompSlideTrillDAnglebert", SMUFL_E5B5_ornamentPrecompSlideTrillDAnglebert },
    { "ornamentPrecompSlideTrillMarpurg", SMUFL_E5B6_ornamentPrecompSlideTrillMarpurg },
    { "ornamentPrecompTurnTrillBach", SMUFL_E5B7_ornamentPrecompTurnTrillBach },
    { "ornamentPrecompSlideTrillBach", SMUFL_E5B8_ornamentPrecompSlideTrillBach },
    { "ornamentPrecompSlideTrillMuffat", SMUFL_E5B9_ornamentPrecompSlideTrillMuffat },
    { "ornamentPrecompSlideTrillSuffixMuffat", SMUFL_E5BA_ornamentPrecompSlideTrillSuffixMuffat },
    { "ornamentPrecompTrillSuffixDandrieu", SMUFL_E5BB_ornamentPrecompTrillSuffixDandrieu },
    { "ornamentPrecompPortDeVoixMordent", SMUFL_E5BC_ornamentPrecompPortDeVoixMordent },
    { "ornamentPrecompTrillWithMordent", SMUFL_E5BD_ornamentPrecompTrillWithMordent },
    { "ornamentPrecompCadence", SMUFL_E5BE_ornamentPrecompCadence },
    { "ornamentPrecompCadenceWithTurn", SMUFL_E5BF_ornamentPrecompCadenceWithTurn },
    { "ornamentPrecompDoubleCadenceLowerPrefix", SMUFL_E5C0_ornamentPrecompDoubleCadenceLowerPrefix },
    { "ornamentPrecompCadenceUpperPrefix", SMUFL_E5C1_ornamentPrecompCadenceUpperPrefix },
    { "ornamentPrecompCadenceUpperPrefixTurn", SMUFL_E5C2_ornamentPrecompCadenceUpperPrefixTurn },
    { "ornamentPrecompDoubleCadenceUpperPrefix", SMUFL_E5C3_ornamentPrecompDoubleCadenceUpperPrefix },
    { "ornamentPrecompDoubleCadenceUpperPrefixTurn", SMUFL_E5C4_ornamentPrecompDoubleCadenceUpperPrefixTurn },
    { "ornamentPrecompMordentRelease", SMUFL_E5C5_ornamentPrecompMordentRelease },
    { "ornamentPrecompMordentUpperPrefix", SMUFL_E5C6_ornamentPrecompMordentUpperPrefix },
    { "ornamentPrecompInvertedMordentUpperPrefix", SMUFL_E5C7_ornamentPrecompInvertedMordentUpperPrefix },
    { "ornamentPrecompTrillLowerSuffix", SMUFL_E5C8_ornamentPrecompTrillLowerSuffix },
    { "stringsDownBow", SMUFL_E610_stringsDownBow },
    { "stringsDownBowTurned", SMUFL_E611_stringsDownBowTurned },
    { "stringsUpBow", SMUFL_E612_stringsUpBow },
    { "stringsUpBowTurned", SMUFL_E613_stringsUpBowTurned },
    { "stringsHarmonic", SMUFL_E614_stringsHarmonic },
    { "pluckedSnapPizzicatoBelow", SMUFL_E630_pluckedSnapPizzicatoBelow },
    { "pluckedSnapPizzicatoAbove", SMUFL_E631_pluckedSnapPizzicatoAbove },
    { "pluckedBuzzPizzicato", SMUFL_E632_pluckedBuzzPizzicato },
    { "pluckedLeftHandPizzicato", SMUFL_E633_pluckedLeftHandPizzicato },
    { "pluckedDamp", SMUFL_E638_pluckedDamp },
    { "vocalSprechgesang", SMUFL_E645_vocalSprechgesang },
    { "keyboardPedalPed", SMUFL_E650_keyboardPedalPed },
    { "keyboardPedalP", SMUFL_E651_keyboardPedalP },
    { "keyboardPedalUp", SMUFL_E655_keyboardPedalUp },
    { "keyboardPedalSost", SMUFL_E659_keyboardPedalSost },
    { "keyboardPedalS", SMUFL_E65A_keyboardPedalS },
    { "tuplet0", SMUFL_E880_tuplet0 },
    { "tuplet1", SMUFL_E881_tuplet1 },
    { "tuplet2", SMUFL_E882_tuplet2 },
    { "tuplet3", SMUFL_E883_tuplet3 },
    { "tuplet4", SMUFL_E884_tuplet4 },
    { "tuplet5", SMUFL_E885_tuplet5 },
    { "tuplet6", SMUFL_E886_tuplet6 },
    { "tuplet7", SMUFL_E887_tuplet7 },
    { "tuplet8", SMUFL_E888_tuplet8 },
    { "tuplet9", SMUFL_E889_tuplet9 },
    { "tupletColon", SMUFL_E88A_tupletColon },
    { "mensuralGclefPetrucci", SMUFL_E901_mensuralGclefPetrucci },
    { "chantFclef", SMUFL_E902_chantFclef },
    { "mensuralFclefPetrucci", SMUFL_E904_mensuralFclefPetrucci },
    { "chantCclef", SMUFL_E906_chantCclef },
    { "mensuralCclefPetrucciPosMiddle", SMUFL_E909_mensuralCclefPetrucciPosMiddle },
    { "mensuralProlation1", SMUFL_E910_mensuralProlation1 },
    { "mensuralProlation2", SMUFL_E911_mensuralProlation2 },
    { "mensuralProlation3", SMUFL_E912_mensuralProlation3 },
    { "mensuralProlation4", SMUFL_E913_mensuralProlation4 },
    { "mensuralProlation5", SMUFL_E914_mensuralProlation5 },
    { "mensuralProlation6", SMUFL_E915_mensuralProlation6 },
    { "mensuralProlation7", SMUFL_E916_mensuralProlation7 },
    { "mensuralProlation8", SMUFL_E917_mensuralProlation8 },
    { "mensuralProlation9", SMUFL_E918_mensuralProlation9 },
    { "mensuralProlation10", SMUFL_E919_mensuralProlation10 },
    { "mensuralProlation11", SMUFL_E91A_mensuralProlation11 },
    { "mensuralProportionTempusPerfectum", SMUFL_E91B_mensuralProportionTempusPerfectum },
    { "mensuralProportionProportioDupla1", SMUFL_E91C_mensuralProportionProportioDupla1 },
    { "mensuralProportionProportioDupla2", SMUFL_E91D_mensuralProportionProportioDupla2 },
    { "mensuralProportionProportioTripla", SMUFL_E91E_mensuralProportionProportioTripla },
    { "mensuralProportionProportioQuadrupla", SMUFL_E91F_mensuralProportionProportioQuadrupla },
    { "mensuralProlationCombiningDot", SMUFL_E920_mensuralProlationCombiningDot },
    { "mensuralProlationCombiningTwoDots", SMUFL_E921_mensuralProlationCombiningTwoDots },
    { "mensuralProlationCombiningThreeDots", SMUFL_E922_mensuralProlationCombiningThreeDots },
    { "mensuralProlationCombiningThreeDotsTri", SMUFL_E923_mensuralProlationCombiningThreeDotsTri },
    { "mensuralProlationCombiningDotVoid", SMUFL_E924_mensuralProlationCombiningDotVoid },
    { "mensuralProlationCombiningStroke", SMUFL_E925_mensuralProlationCombiningStroke },
    { "mensuralNoteheadSemibrevisBlack", SMUFL_E938_mensuralNoteheadSemibrevisBlack },
    { "mensuralNoteheadSemibrevisVoid", SMUFL_E939_mensuralNoteheadSemibrevisVoid },
    { "mensuralNoteheadMinimaWhite", SMUFL_E93C_mensuralNoteheadMinimaWhite },
    { "mensuralNoteheadSemiminimaWhite", SMUFL_E93D_mensuralNoteheadSemiminimaWhite },
    { "mensuralCombStemUp", SMUFL_E93E_mensuralCombStemUp },
    { "mensuralCombStemDown", SMUFL_E93F_mensuralCombStemDown },
    { "mensuralCombStemUpFlagSemiminima", SMUFL_E949_mensuralCombStemUpFlagSemiminima },
    { "mensuralCombStemDownFlagSemiminima", SMUFL_E94A_mensuralCombStemDownFlagSemiminima },
    { "mensuralCombStemUpFlagFusa", SMUFL_E94B_mensuralCombStemUpFlagFusa },
    { "mensuralCombStemDownFlagFusa", SMUFL_E94C_mensuralCombStemDownFlagFusa },
    { "chantPunctum", SMUFL_E990_chantPunctum },
    { "chantPunctumInclinatum", SMUFL_E991_chantPunctumInclinatum },
    { "chantPunctumVirga", SMUFL_E996_chantPunctumVirga },
    { "chantQuilisma", SMUFL_E99B_chantQuilisma },
    { "chantOriscusLiquescens", SMUFL_E99E_chantOriscusLiquescens },
    { "chantStrophicus", SMUFL_E99F_chantStrophicus },
    { "chantEntryLineAsc2nd", SMUFL_E9B4_chantEntryLineAsc2nd },
    { "chantEntryLineAsc3rd", SMUFL_E9B5_chantEntryLineAsc3rd },
    { "chantEntryLineAsc4th", SMUFL_E9B6_chantEntryLineAsc4th },
    { "chantEntryLineAsc5th", SMUFL_E9B7_chantEntryLineAsc5th },
    { "chantLigaturaDesc2nd", SMUFL_E9B9_chantLigaturaDesc2nd },
    { "chantLigaturaDesc3rd", SMUFL_E9BA_chantLigaturaDesc3rd },
    { "chantLigaturaDesc4th", SMUFL_E9BB_chantLigaturaDesc4th },
    { "chantLigaturaDesc5th", SMUFL_E9BC_chantLigaturaDesc5th },
    { "mensuralRestMaxima", SMUFL_E9F0_mensuralRestMaxima },
    { "mensuralRestLongaPerfecta", SMUFL_E9F1_mensuralRestLongaPerfecta },
    { "mensuralRestLongaImperfecta", SMUFL_E9F2_mensuralRestLongaImperfecta },
    { "mensuralRestBrevis", SMUFL_E9F3_mensuralRestBrevis },
    { "mensuralRestSemibrevis", SMUFL_E9F4_mensuralRestSemibrevis },
    { "mensuralRestMinima", SMUFL_E9F5_mensuralRestMinima },
    { "mensuralRestSemiminima", SMUFL_E9F6_mensuralRestSemiminima },
    { "mensuralRestFusa", SMUFL_E9F7_mensuralRestFusa },
    { "mensuralRestSemifusa", SMUFL_E9F8_mensuralRestSemifusa },
    { "mensuralCustosUp", SMUFL_EA02_mensuralCustosUp },
    { "chantCustosStemUpPosMiddle", SMUFL_EA06_chantCustosStemUpPosMiddle },
    { "wiggleArpeggiatoUp", SMUFL_EAA9_wiggleArpeggiatoUp },
    { "wiggleArpeggiatoDown", SMUFL_EAAA_wiggleArpeggiatoDown },
    { "wiggleArpeggiatoUpArrow", SMUFL_EAAD_wiggleArpeggiatoUpArrow },
    { "wiggleArpeggiatoDownArrow", SMUFL_EAAE_wiggleArpeggiatoDownArrow },
    { "luteDurationWhole", SMUFL_EBA7_luteDurationWhole },
    { "luteDurationHalf", SMUFL_EBA8_luteDurationHalf },
    { "luteDurationQuarter", SMUFL_EBA9_luteDurationQuarter },
    { "luteDuration8th", SMUFL_EBAA_luteDuration8th },
    { "luteDuration16th", SMUFL_EBAB_luteDuration16th },
    { "luteDuration32nd", SMUFL_EBAC_luteDuration32nd },
    { "luteItalianFret0", SMUFL_EBE0_luteItalianFret0 },
    { "luteItalianFret1", SMUFL_EBE1_luteItalianFret1 },
    { "luteItalianFret2", SMUFL_EBE2_luteItalianFret2 },
    { "luteItalianFret3", SMUFL_EBE3_luteItalianFret3 },
    { "luteItalianFret4", SMUFL_EBE4_luteItalianFret4 },
    { "luteItalianFret5", SMUFL_EBE5_luteItalianFret5 },
    { "luteItalianFret6", SMUFL_EBE6_luteItalianFret6 },
    { "luteItalianFret7", SMUFL_EBE7_luteItalianFret7 },
    { "luteItalianFret8", SMUFL_EBE8_luteItalianFret8 },
    { "luteItalianFret9", SMUFL_EBE9_luteItalianFret9 },
};

/** The number of glyphs for verification **/
// 366

} // namespace vrv
