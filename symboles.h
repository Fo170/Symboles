// Symboles.h
// Bibliothèque de symboles avec conversion UTF-8 universelle
// Version complète avec codes Unicode réels
// ===========================================================

#ifndef SYMBOLES_H
#define SYMBOLES_H

#include <Arduino.h>
#include <WString.h>

// =============================================
// CONFIGURATION PAR DÉFAUT
// =============================================
// Activer/désactiver des catégories pour économiser la ROM
#define SYMBOLES_MATHS_UTF8
#define SYMBOLES_FLECHES_UTF8
#define SYMBOLES_METEO_UTF8
#define SYMBOLES_ELECTRIQUE_UTF8
#define SYMBOLES_CAPTEURS_UTF8
#define SYMBOLES_TECHNIQUE_UTF8
#define SYMBOLES_TEMPS_UTF8
#define SYMBOLES_ETAT_UTF8
#define SYMBOLES_OUTILS_UTF8
#define SYMBOLES_NUMERIQUES_UTF8

// =============================================
// CODES UNICODE RÉELS (pas des valeurs arbitraires)
// =============================================

// ------------------------------------------------------------
// SYMBOLES DE BASE (Latin-1 et Unicode communs)
// ------------------------------------------------------------
// Les codes ASCII 0-127 restent identiques

// Symboles étendus avec codes Unicode réels
enum SymbolesBase {
  // ASCII étendus (Latin-1) en codes Unicode
  SYM_DEGRE = 0x00B0,                  // ° - DEGREE SIGN
  SYM_MICRO = 0x00B5,                  // µ - MICRO SIGN
  SYM_PLUS_MINUS = 0x00B1,             // ± - PLUS-MINUS SIGN
  SYM_SUPERIEUR_EGAL = 0x2265,         // ≥ - GREATER-THAN OR EQUAL TO
  SYM_INFERIEUR_EGAL = 0x2264,         // ≤ - LESS-THAN OR EQUAL TO
  SYM_EGAL_APPROX = 0x2248,            // ≈ - ALMOST EQUAL TO
  SYM_RACINE_CARREE = 0x221A,          // √ - SQUARE ROOT
  SYM_PUISSANCE_2 = 0x00B2,            // ² - SUPERSCRIPT TWO
  SYM_PUISSANCE_3 = 0x00B3,            // ³ - SUPERSCRIPT THREE
  SYM_PUISSANCE_1 = 0x00B9,            // ¹ - SUPERSCRIPT ONE
  SYM_DIVISION = 0x00F7,               // ÷ - DIVISION SIGN
  SYM_MULTIPLICATION = 0x00D7,         // × - MULTIPLICATION SIGN
  SYM_INFINI = 0x221E,                 // ∞ - INFINITY
  SYM_INTEGRALE = 0x222B,              // ∫ - INTEGRAL
  SYM_SOMME = 0x03A3,                  // Σ - GREEK CAPITAL LETTER SIGMA
  SYM_PI = 0x03C0,                     // π - GREEK SMALL LETTER PI
  SYM_POUR_MILLE = 0x2030,             // ‰ - PER MILLE SIGN
  SYM_DEGRE_CERCLE = 0x00B0,           // ° - alias pour DEGREE SIGN
  SYM_BULLET = 0x2022,                 // • - BULLET
  SYM_POINT_MILIEU = 0x00B7,           // · - MIDDLE DOT
  SYM_POINTS_SUSPENSION = 0x2026,      // … - HORIZONTAL ELLIPSIS
  
  // Caractères accentués français
  SYM_E_ACCENT_AIGU = 0x00E9,          // é - LATIN SMALL LETTER E WITH ACUTE
  SYM_E_ACCENT_GRAVE = 0x00E8,         // è - LATIN SMALL LETTER E WITH GRAVE
  SYM_E_CIRCONFLEXE = 0x00EA,          // ê - LATIN SMALL LETTER E WITH CIRCUMFLEX
  SYM_A_GRAVE = 0x00E0,                // à - LATIN SMALL LETTER A WITH GRAVE
  SYM_A_CIRCONFLEXE = 0x00E2,          // â - LATIN SMALL LETTER A WITH CIRCUMFLEX
  SYM_C_CEDILLE = 0x00E7,              // ç - LATIN SMALL LETTER C WITH CEDILLA
  SYM_U_GRAVE = 0x00F9,                // ù - LATIN SMALL LETTER U WITH GRAVE
  SYM_U_CIRCONFLEXE = 0x00FB,          // û - LATIN SMALL LETTER U WITH CIRCUMFLEX
  SYM_O_CIRCONFLEXE = 0x00F4,          // ô - LATIN SMALL LETTER O WITH CIRCUMFLEX
};

// ------------------------------------------------------------
// SYMBOLES MATHÉMATIQUES UTF-8 (COMPLÉTÉ)
// ------------------------------------------------------------
#ifdef SYMBOLES_MATHS_UTF8
enum SymbolesMaths {
  // Fractions vulgaires
  SYM_MATHS_FRACTION_1_2 = 0x00BD,     // ½ - VULGAR FRACTION ONE HALF
  SYM_MATHS_FRACTION_1_4 = 0x00BC,     // ¼ - VULGAR FRACTION ONE QUARTER
  SYM_MATHS_FRACTION_3_4 = 0x00BE,     // ¾ - VULGAR FRACTION THREE QUARTERS
  SYM_MATHS_FRACTION_1_3 = 0x2153,     // ⅓ - VULGAR FRACTION ONE THIRD
  SYM_MATHS_FRACTION_2_3 = 0x2154,     // ⅔ - VULGAR FRACTION TWO THIRDS
  SYM_MATHS_FRACTION_1_5 = 0x2155,     // ⅕ - VULGAR FRACTION ONE FIFTH
  SYM_MATHS_FRACTION_2_5 = 0x2156,     // ⅖ - VULGAR FRACTION TWO FIFTHS
  SYM_MATHS_FRACTION_3_5 = 0x2157,     // ⅗ - VULGAR FRACTION THREE FIFTHS
  SYM_MATHS_FRACTION_4_5 = 0x2158,     // ⅘ - VULGAR FRACTION FOUR FIFTHS
  SYM_MATHS_FRACTION_1_6 = 0x2159,     // ⅙ - VULGAR FRACTION ONE SIXTH
  SYM_MATHS_FRACTION_5_6 = 0x215A,     // ⅚ - VULGAR FRACTION FIVE SIXTHS
  SYM_MATHS_FRACTION_1_8 = 0x215B,     // ⅛ - VULGAR FRACTION ONE EIGHTH
  SYM_MATHS_FRACTION_3_8 = 0x215C,     // ⅜ - VULGAR FRACTION THREE EIGHTHS
  SYM_MATHS_FRACTION_5_8 = 0x215D,     // ⅝ - VULGAR FRACTION FIVE EIGHTHS
  SYM_MATHS_FRACTION_7_8 = 0x215E,     // ⅞ - VULGAR FRACTION SEVEN EIGHTHS
  
  // Exposants
  SYM_MATHS_EXPOSANT_0 = 0x2070,       // ⁰ - SUPERSCRIPT ZERO
  SYM_MATHS_EXPOSANT_1 = 0x00B9,       // ¹ - SUPERSCRIPT ONE
  SYM_MATHS_EXPOSANT_2 = 0x00B2,       // ² - SUPERSCRIPT TWO
  SYM_MATHS_EXPOSANT_3 = 0x00B3,       // ³ - SUPERSCRIPT THREE
  SYM_MATHS_EXPOSANT_4 = 0x2074,       // ⁴ - SUPERSCRIPT FOUR
  SYM_MATHS_EXPOSANT_5 = 0x2075,       // ⁵ - SUPERSCRIPT FIVE
  SYM_MATHS_EXPOSANT_6 = 0x2076,       // ⁶ - SUPERSCRIPT SIX
  SYM_MATHS_EXPOSANT_7 = 0x2077,       // ⁷ - SUPERSCRIPT SEVEN
  SYM_MATHS_EXPOSANT_8 = 0x2078,       // ⁸ - SUPERSCRIPT EIGHT
  SYM_MATHS_EXPOSANT_9 = 0x2079,       // ⁹ - SUPERSCRIPT NINE
  SYM_MATHS_EXPOSANT_PLUS = 0x207A,    // ⁺ - SUPERSCRIPT PLUS SIGN
  SYM_MATHS_EXPOSANT_MOINS = 0x207B,   // ⁻ - SUPERSCRIPT MINUS
  SYM_MATHS_EXPOSANT_EGAL = 0x207C,    // ⁼ - SUPERSCRIPT EQUALS SIGN
  SYM_MATHS_EXPOSANT_PAREN_G = 0x207D, // ⁽ - SUPERSCRIPT LEFT PARENTHESIS
  SYM_MATHS_EXPOSANT_PAREN_D = 0x207E, // ⁾ - SUPERSCRIPT RIGHT PARENTHESIS
  
  // Indices
  SYM_MATHS_INDICE_0 = 0x2080,         // ₀ - SUBSCRIPT ZERO
  SYM_MATHS_INDICE_1 = 0x2081,         // ₁ - SUBSCRIPT ONE
  SYM_MATHS_INDICE_2 = 0x2082,         // ₂ - SUBSCRIPT TWO
  SYM_MATHS_INDICE_3 = 0x2083,         // ₃ - SUBSCRIPT THREE
  SYM_MATHS_INDICE_4 = 0x2084,         // ₄ - SUBSCRIPT FOUR
  SYM_MATHS_INDICE_5 = 0x2085,         // ₅ - SUBSCRIPT FIVE
  SYM_MATHS_INDICE_6 = 0x2086,         // ₆ - SUBSCRIPT SIX
  SYM_MATHS_INDICE_7 = 0x2087,         // ₇ - SUBSCRIPT SEVEN
  SYM_MATHS_INDICE_8 = 0x2088,         // ₈ - SUBSCRIPT EIGHT
  SYM_MATHS_INDICE_9 = 0x2089,         // ₉ - SUBSCRIPT NINE
  SYM_MATHS_INDICE_PLUS = 0x208A,      // ₊ - SUBSCRIPT PLUS SIGN
  SYM_MATHS_INDICE_MOINS = 0x208B,     // ₋ - SUBSCRIPT MINUS
  SYM_MATHS_INDICE_EGAL = 0x208C,      // ₌ - SUBSCRIPT EQUALS SIGN
  SYM_MATHS_INDICE_PAREN_G = 0x208D,   // ₍ - SUBSCRIPT LEFT PARENTHESIS
  SYM_MATHS_INDICE_PAREN_D = 0x208E,   // ₎ - SUBSCRIPT RIGHT PARENTHESIS
  
  // Symboles mathématiques divers
  SYM_MATHS_PARALLELE = 0x2225,        // ∥ - PARALLEL TO
  SYM_MATHS_PERPENDICULAIRE = 0x27C2,  // ⟂ - PERPENDICULAR
  SYM_MATHS_ANGLE = 0x2220,            // ∠ - ANGLE
  SYM_MATHS_APPARTIENT = 0x2208,       // ∈ - ELEMENT OF
  SYM_MATHS_N_APPARTIENT_PAS = 0x2209, // ∉ - NOT AN ELEMENT OF
  SYM_MATHS_INCLUS = 0x2282,           // ⊂ - SUBSET OF
  SYM_MATHS_N_INCLUS_PAS = 0x2284,     // ⊄ - NOT A SUBSET OF
  SYM_MATHS_UNION = 0x222A,            // ∪ - UNION
  SYM_MATHS_INTERSECTION = 0x2229,     // ∩ - INTERSECTION
  SYM_MATHS_VIDE = 0x2205,             // ∅ - EMPTY SET
  SYM_MATHS_ALEPH = 0x2135,            // ℵ - ALEF SYMBOL
  SYM_MATHS_HBAR = 0x210F,             // ℏ - PLANCK CONSTANT OVER TWO PI
  SYM_MATHS_TAU_ = 0x03C4,             // τ - GREEK SMALL LETTER TAU
  SYM_MATHS_PHI = 0x03C6,              // φ - GREEK SMALL LETTER PHI
  SYM_MATHS_THETA = 0x03B8,            // θ - GREEK SMALL LETTER THETA
  SYM_MATHS_OMEGA = 0x03C9,            // ω - GREEK SMALL LETTER OMEGA
  SYM_MATHS_NABLA = 0x2207,            // ∇ - NABLA
  SYM_MATHS_PARTIAL = 0x2202,          // ∂ - PARTIAL DIFFERENTIAL
  SYM_MATHS_PRODUIT = 0x220F,          // ∏ - N-ARY PRODUCT
  SYM_MATHS_PRIME = 0x2032,            // ′ - PRIME
  SYM_MATHS_DOUBLE_PRIME = 0x2033,     // ″ - DOUBLE PRIME
  
  // Symboles grecs minuscules COMPLÉTÉS
  SYM_MATHS_ALPHA = 0x03B1,            // α - GREEK SMALL LETTER ALPHA
  SYM_MATHS_BETA = 0x03B2,             // β - GREEK SMALL LETTER BETA
  SYM_MATHS_GAMMA = 0x03B3,            // γ - GREEK SMALL LETTER GAMMA
  SYM_MATHS_DELTA = 0x03B4,            // δ - GREEK SMALL LETTER DELTA
  SYM_MATHS_EPSILON = 0x03B5,          // ε - GREEK SMALL LETTER EPSILON
  SYM_MATHS_ZETA = 0x03B6,             // ζ - GREEK SMALL LETTER ZETA
  SYM_MATHS_ETA = 0x03B7,              // η - GREEK SMALL LETTER ETA
  SYM_MATHS_IOTA = 0x03B9,             // ι - GREEK SMALL LETTER IOTA
  SYM_MATHS_KAPPA = 0x03BA,            // κ - GREEK SMALL LETTER KAPPA
  SYM_MATHS_LAMBDA = 0x03BB,           // λ - GREEK SMALL LETTER LAMBDA
  SYM_MATHS_MU = 0x03BC,               // μ - GREEK SMALL LETTER MU
  SYM_MATHS_NU = 0x03BD,               // ν - GREEK SMALL LETTER NU
  SYM_MATHS_XI = 0x03BE,               // ξ - GREEK SMALL LETTER XI
  SYM_MATHS_OMICRON = 0x03BF,          // ο - GREEK SMALL LETTER OMICRON
  SYM_MATHS_RHO = 0x03C1,              // ρ - GREEK SMALL LETTER RHO
  SYM_MATHS_SIGMA = 0x03C3,            // σ - GREEK SMALL LETTER SIGMA
  SYM_MATHS_SIGMA_MAJ = 0x03A3,        // Σ - GREEK CAPITAL LETTER SIGMA
  SYM_MATHS_TAU = 0x03C4,              // τ - GREEK SMALL LETTER TAU
  SYM_MATHS_UPSILON = 0x03C5,          // υ - GREEK SMALL LETTER UPSILON
  SYM_MATHS_CHI = 0x03C7,              // χ - GREEK SMALL LETTER CHI
  SYM_MATHS_PSI = 0x03C8,              // ψ - GREEK SMALL LETTER PSI
  SYM_MATHS_OMEGA_MAJ = 0x03A9,        // Ω - GREEK CAPITAL LETTER OMEGA
  
  // Symboles grecs majuscules
  SYM_MATHS_ALPHA_MAJ = 0x0391,        // Α - GREEK CAPITAL LETTER ALPHA
  SYM_MATHS_BETA_MAJ = 0x0392,         // Β - GREEK CAPITAL LETTER BETA
  SYM_MATHS_GAMMA_MAJ = 0x0393,        // Γ - GREEK CAPITAL LETTER GAMMA
  SYM_MATHS_DELTA_MAJ = 0x0394,        // Δ - GREEK CAPITAL LETTER DELTA
  SYM_MATHS_EPSILON_MAJ = 0x0395,      // Ε - GREEK CAPITAL LETTER EPSILON
  SYM_MATHS_ZETA_MAJ = 0x0396,         // Ζ - GREEK CAPITAL LETTER ZETA
  SYM_MATHS_ETA_MAJ = 0x0397,          // Η - GREEK CAPITAL LETTER ETA
  SYM_MATHS_THETA_MAJ = 0x0398,        // Θ - GREEK CAPITAL LETTER THETA
  SYM_MATHS_IOTA_MAJ = 0x0399,         // Ι - GREEK CAPITAL LETTER IOTA
  SYM_MATHS_KAPPA_MAJ = 0x039A,        // Κ - GREEK CAPITAL LETTER KAPPA
  SYM_MATHS_LAMBDA_MAJ = 0x039B,       // Λ - GREEK CAPITAL LETTER LAMBDA
  SYM_MATHS_MU_MAJ = 0x039C,           // Μ - GREEK CAPITAL LETTER MU
  SYM_MATHS_NU_MAJ = 0x039D,           // Ν - GREEK CAPITAL LETTER NU
  SYM_MATHS_XI_MAJ = 0x039E,           // Ξ - GREEK CAPITAL LETTER XI
  SYM_MATHS_OMICRON_MAJ = 0x039F,      // Ο - GREEK CAPITAL LETTER OMICRON
  SYM_MATHS_PI_MAJ = 0x03A0,           // Π - GREEK CAPITAL LETTER PI
  SYM_MATHS_RHO_MAJ = 0x03A1,          // Ρ - GREEK CAPITAL LETTER RHO
  SYM_MATHS_UPSILON_MAJ = 0x03A5,      // Υ - GREEK CAPITAL LETTER UPSILON
  SYM_MATHS_PHI_MAJ = 0x03A6,          // Φ - GREEK CAPITAL LETTER PHI
  SYM_MATHS_CHI_MAJ = 0x03A7,          // Χ - GREEK CAPITAL LETTER CHI
  SYM_MATHS_PSI_MAJ = 0x03A8,          // Ψ - GREEK CAPITAL LETTER PSI
  
  // Symboles mathématiques avancés
  SYM_MATHS_EQUIVALENT = 0x2261,       // ≡ - IDENTICAL TO
  SYM_MATHS_PROCHAIN = 0x2192,         // → - RIGHTWARDS ARROW
  SYM_MATHS_BICONDITIONNEL = 0x2194,   // ↔ - LEFT RIGHT ARROW
  SYM_MATHS_POUR_TOUT = 0x2200,        // ∀ - FOR ALL
  SYM_MATHS_IL_EXISTE = 0x2203,        // ∃ - THERE EXISTS
  SYM_MATHS_NON = 0x00AC,              // ¬ - NOT SIGN
  SYM_MATHS_ET = 0x2227,               // ∧ - LOGICAL AND
  SYM_MATHS_OU = 0x2228,               // ∨ - LOGICAL OR
  SYM_MATHS_DIFFERENT = 0x2260,        // ≠ - NOT EQUAL TO
  SYM_MATHS_PROPORTIONNEL = 0x221D,    // ∝ - PROPORTIONAL TO
  SYM_MATHS_DIAMANT = 0x25C6,          // ◆ - BLACK DIAMOND
  SYM_MATHS_CERCLE_PLUS = 0x2295,      // ⊕ - CIRCLED PLUS
  SYM_MATHS_CERCLE_MOINS = 0x2296,     // ⊖ - CIRCLED MINUS
  SYM_MATHS_CERCLE_TIMES = 0x2297,     // ⊗ - CIRCLED TIMES
  SYM_MATHS_CERCLE_DIVIDE = 0x2298,    // ⊘ - CIRCLED DIVISION SLASH
};

#define SYM_MATHS_PI SYM_PI
#endif

// ------------------------------------------------------------
// SYMBOLES ÉLECTRIQUES ET ÉLECTRONIQUES
// ------------------------------------------------------------
#ifdef SYMBOLES_ELECTRIQUE_UTF8
enum SymbolesElectrique {
  SYM_ELEC_RESISTANCE = 0x2126,        // Ω - OHM SIGN
  SYM_ELEC_CAPACITE = 0x0046,          // F - LATIN CAPITAL LETTER F (pas de symbole spécial)
  SYM_ELEC_INDUCTANCE = 0x0048,        // H - LATIN CAPITAL LETTER H (pas de symbole spécial)
  SYM_ELEC_DIODE = 0x23D3,             // ⎓ - DISCRETE INTEGRATION SYMBOL
  SYM_ELEC_DIODE_ZENER = 0x23DA,       // ⏚ - EARTH GROUND
  SYM_ELEC_TRANSISTOR_NPN = 0x23C2,    // ⏂ - ELECTRICAL NPN TRANSISTOR SYMBOL
  SYM_ELEC_TRANSISTOR_PNP = 0x23C3,    // ⏃ - ELECTRICAL PNP TRANSISTOR SYMBOL
  SYM_ELEC_SOURCE_TENSION = 0x2394,    // ⎔ - SQUARE LOZENGE
  SYM_ELEC_SOURCE_COURANT = 0x2395,    // ⎕ - APL FUNCTIONAL SYMBOL QUAD
  SYM_ELEC_PILE = 0x238D,              // ⎍ - BEGINNING OF LINE
  SYM_ELEC_ACCU = 0x238C,              // ⎌ - HORIZONTAL LINE EXTENSION
  SYM_ELEC_FUSIBLE = 0x23C0,           // ⏀ - ELECTRICAL FUSE SYMBOL
  SYM_ELEC_INTERRUPTEUR = 0x23C9,      // ⏉ - ELECTRICAL SWITCH SYMBOL
  SYM_ELEC_INTER_OUVERT = 0x23CA,      // ⏊ - OPEN CIRCUIT OUTPUT
  SYM_ELEC_INTER_FERME = 0x23CB,       // ⏋ - CLOSED CIRCUIT OUTPUT
  SYM_ELEC_RELAIS = 0x23CC,            // ⏌ - ELECTRICAL RELAY SYMBOL
  SYM_ELEC_MOTEUR = 0x238D,            // ⎍ - BEGINNING OF LINE (réutilisé)
  SYM_ELEC_GENERATEUR = 0x23CE,        // ⏎ - RETURN SYMBOL
  SYM_ELEC_TRANSFORMATEUR = 0x23CF,    // ⏏ - EJECT SYMBOL
  SYM_ELEC_ANTENNE = 0x23AE,           // ⎮ - INTEGRAL EXTENSION
  SYM_ELEC_MASSE = 0x23E2,             // ⏢ - FUSE (correction)
  SYM_ELEC_MASSE_2 = 0x23E3,           // ⏣ - TOP PARENTHESIS
  SYM_ELEC_PLUS = 0x002B,              // + - PLUS SIGN
  SYM_ELEC_MOINS = 0x2212,             // − - MINUS SIGN
  SYM_ELEC_ALTERNATIF = 0x223F,        // ∿ - SINE WAVE
  SYM_ELEC_CONTINU = 0x2500,           // ─ - BOX DRAWINGS LIGHT HORIZONTAL
  SYM_ELEC_PHASE = 0x03C6,             // φ - GREEK SMALL LETTER PHI
  SYM_ELEC_NEUTRE = 0x004E,            // N - LATIN CAPITAL LETTER N
  SYM_ELEC_TERRE = 0x23DA,             // ⏚ - EARTH GROUND
  SYM_ELEC_CAPACITE_VAR = 0x23DB,      // ⏛ - VARIABLE CAPACITOR SYMBOL
  SYM_ELEC_RESISTANCE_VAR = 0x23DC,    // ⏜ - VARIABLE RESISTOR SYMBOL
  SYM_ELEC_ECLAIR = 0x26A1,            // ⚡ - HIGH VOLTAGE SIGN
  SYM_ELEC_PORTE_AND = 0x2227,         // ∧ - LOGICAL AND
  SYM_ELEC_PORTE_OR = 0x2228,          // ∨ - LOGICAL OR
  SYM_ELEC_PORTE_NOT = 0x00AC,         // ¬ - NOT SIGN
  SYM_ELEC_PORTE_NAND = 0x22BC,        // ⊼ - NAND
  SYM_ELEC_PORTE_NOR = 0x22BD,         // ⊽ - NOR
  SYM_ELEC_PORTE_XOR = 0x2295,         // ⊕ - CIRCLED PLUS
  SYM_ELEC_PORTE_XNOR = 0x2299,        // ⊙ - CIRCLED DOT OPERATOR
  SYM_ELEC_FLIP_FLOP = 0x23E0,         // ⏠ - FLIP-FLOP SYMBOL
  SYM_ELEC_COMPTEUR = 0x23E1,          // ⏡ - COUNTER SYMBOL
  SYM_ELEC_REGISTRE = 0x23E2,          // ⏢ - FUSE
  SYM_ELEC_MEMOIRE = 0x23E3,           // ⏣ - TOP PARENTHESIS
  SYM_ELEC_PROCESSOR = 0x23E4,         // ⏤ - BOTTOM PARENTHESIS
  SYM_ELEC_ADC = 0x23E5,               // ⏥ - ANALOG-TO-DIGITAL CONVERTER SYMBOL
  SYM_ELEC_DAC = 0x23E6,               // ⏦ - DIGITAL-TO-ANALOG CONVERTER SYMBOL
  SYM_ELEC_CAPTEUR_TEMP = 0x1F321,     // 🌡️ - THERMOMETER
  SYM_ELEC_PHOTODIODE = 0x1F4A1,       // 💡 - LIGHT BULB
  SYM_ELEC_PIEZO = 0x1F3B5,            // 🎵 - MUSICAL NOTE
  SYM_ELEC_LED = 0x1F4A1,              // 💡 - LIGHT BULB
  SYM_ELEC_LASER = 0x1F52D,            // 🔦 - FLASHLIGHT
  SYM_ELEC_IOT = 0x1F4E1,              // 📡 - SATELLITE ANTENNA
};
#endif

// ------------------------------------------------------------
// SYMBOLES DE CAPTEURS ET CAPTATION
// ------------------------------------------------------------
#ifdef SYMBOLES_CAPTEURS_UTF8
enum SymbolesCapteurs {
  // Emojis pour les capteurs (Unicode 6.0+)
  SYM_CAPT_TEMPERATURE = 0x1F321,      // 🌡️ - THERMOMETER
  SYM_CAPT_HUMIDITE = 0x1F4A7,         // 💧 - DROPLET
  SYM_CAPT_PRESSION = 0x1F4C9,         // 📉 - CHART DOWNWARDS
  SYM_CAPT_LUMINOSITE = 0x1F506,       // 🔆 - HIGH BRIGHTNESS SYMBOL
  SYM_CAPT_MOUVEMENT = 0x1F441,        // 👁️ - EYE
  SYM_CAPT_VITESSE = 0x1F680,          // 🚀 - ROCKET
  SYM_CAPT_ACCELERATION = 0x23E9,      // ⏩ - BLACK RIGHT-POINTING DOUBLE TRIANGLE
  SYM_CAPT_GYROSCOPE = 0x1F300,        // 🌀 - CYCLONE
  SYM_CAPT_MAGNETIQUE = 0x1F9F2,       // 🧲 - MAGNET
  SYM_CAPT_SON = 0x1F50A,              // 🔊 - SPEAKER WITH THREE SOUND WAVES
  SYM_CAPT_GAZ = 0x1F4A8,              // 💨 - DASH SYMBOL
  SYM_CAPT_CO2 = 0x1F343,              // 🍃 - LEAF FLUTTERING IN WIND
  SYM_CAPT_VOC = 0x1F443,              // 👃 - NOSE
  SYM_CAPT_PARTICULES = 0x1F4AB,       // 💫 - DIZZY SYMBOL
  SYM_CAPT_UV = 0x2600,                // ☀️ - BLACK SUN WITH RAYS
  SYM_CAPT_INFRAROUGE = 0x1F525,       // 🔥 - FIRE
  SYM_CAPT_RADAR = 0x1F4E1,            // 📡 - SATELLITE ANTENNA
  SYM_CAPT_LIDAR = 0x1F3AF,            // 🎯 - DIRECT HIT
  SYM_CAPT_GPS = 0x1F4CD,              // 📍 - ROUND PUSHPIN
  SYM_CAPT_RFID = 0x1F39F,             // 🎟️ - ADMISSION TICKETS
  SYM_CAPT_NFC = 0x1F4F2,              // 📲 - MOBILE PHONE WITH RIGHTWARDS ARROW
  SYM_CAPT_BLUETOOTH = 0x1F4F6,        // 📶 - ANTENNA WITH BARS
  SYM_CAPT_WIFI = 0x1F4E1,             // 📡 - SATELLITE ANTENNA
  SYM_CAPT_CELLULAIRE = 0x1F4F1,       // 📱 - MOBILE PHONE
  SYM_CAPT_SATELLITE = 0x1F6F0,        // 🛰️ - SATELLITE
  SYM_CAPT_CAMERA = 0x1F4F8,           // 📸 - CAMERA WITH FLASH
  SYM_CAPT_MICRO = 0x1F3A4,            // 🎤 - MICROPHONE
  SYM_CAPT_TOUCH = 0x1F446,            // 👆 - WHITE UP POINTING BACKHAND INDEX
  SYM_CAPT_FORCE = 0x1F4AA,            // 💪 - FLEXED BICEPS
  SYM_CAPT_POSITION = 0x1F4CD,         // 📍 - ROUND PUSHPIN
  SYM_CAPT_ALTITUDE = 0x26F0,          // ⛰️ - MOUNTAIN
  SYM_CAPT_PROXIMITE = 0x2194,         // ↔️ - LEFT RIGHT ARROW
  SYM_CAPT_COULEUR = 0x1F3A8,          // 🎨 - ARTIST PALETTE
  SYM_CAPT_PH = 0x2697,                // ⚗️ - ALEMBIC
  SYM_CAPT_CONDUCTIVITE = 0x26A1,      // ⚡ - HIGH VOLTAGE SIGN
  SYM_CAPT_ORP = 0x2696,               // ⚖️ - SCALES
  SYM_CAPT_ECOULEMENT = 0x1F4A6,       // 💦 - SPLASHING SWEAT SYMBOL
  SYM_CAPT_NIVEAU = 0x1F4CA,           // 📊 - BAR CHART
  SYM_CAPT_VIBRATION = 0x1F4F3,        // 📳 - VIBRATION MODE
  SYM_CAPT_INCLINAISON = 0x1F4D0,      // 📐 - TRIANGULAR RULER
  SYM_CAPT_RAYON_X = 0x2622,           // ☢️ - RADIOACTIVE SIGN
  SYM_CAPT_RADIOACTIVITE = 0x2622,     // ☢️ - RADIOACTIVE SIGN
  SYM_CAPT_BIOMETRIE = 0x1F441,        // 👁️ - EYE
  SYM_CAPT_CARDIAQUE = 0x1F493,        // 💓 - BEATING HEART
  SYM_CAPT_POULS = 0x1F497,            // 💗 - GROWING HEART
  SYM_CAPT_SPO2 = 0x2764,              // ❤️ - HEAVY BLACK HEART
  SYM_CAPT_GLUCOSE = 0x1FA78,          // 🩸 - DROP OF BLOOD
  SYM_CAPT_EEG = 0x1F9E0,              // 🧠 - BRAIN
  SYM_CAPT_EMG = 0x1F4AA,              // 💪 - FLEXED BICEPS
};
#endif

// ------------------------------------------------------------
// SYMBOLES TECHNIQUES ET INGÉNIERIE
// ------------------------------------------------------------
#ifdef SYMBOLES_TECHNIQUE_UTF8
enum SymbolesTechnique {
  SYM_TECH_ROUE_DENTEE = 0x2699,       // ⚙️ - GEAR
  SYM_TECH_POULIE = 0x1F6E1,           // 🛡️ - SHIELD (correction pour poulie)
  SYM_TECH_RESERVOIR = 0x26FD,         // ⛽ - FUEL PUMP
  SYM_TECH_POMPE = 0x1F4A7,            // 💧 - DROPLET
  SYM_TECH_VALVE = 0x23CF,             // ⏏️ - EJECT SYMBOL
  SYM_TECH_CAPTEUR_PRESSION = 0x1F4CA, // 📊 - BAR CHART
  SYM_TECH_THERMOSTAT = 0x1F321,       // 🌡️ - THERMOMETER
  SYM_TECH_CHAUDIERE = 0x1F525,        // 🔥 - FIRE
  SYM_TECH_REFRIGERATEUR = 0x2744,     // ❄️ - SNOWFLAKE
  SYM_TECH_VENTILATEUR = 0x1F4A8,      // 💨 - DASH SYMBOL
  SYM_TECH_COMPRESSEUR = 0x1F4A8,      // 💨 - DASH SYMBOL
  SYM_TECH_TURBINE = 0x1F300,          // 🌀 - CYCLONE
  SYM_TECH_MOTEUR_COMBUSTION = 0x1F525,// 🔥 - FIRE
  SYM_TECH_MOTEUR_ELECTRIQUE = 0x26A1, // ⚡ - HIGH VOLTAGE SIGN
  SYM_TECH_MOTEUR_HYDRAULIQUE = 0x1F4A6,// 💦 - SPLASHING SWEAT SYMBOL
  SYM_TECH_MOTEUR_PNEUMATIQUE = 0x1F4A8,// 💨 - DASH SYMBOL
  SYM_TECH_ROBOT = 0x1F916,            // 🤖 - ROBOT FACE
  SYM_TECH_CONVOYEUR = 0x2B07,         // ⬇️ - DOWNWARDS BLACK ARROW
  SYM_TECH_PESEE = 0x2696,             // ⚖️ - SCALES
  SYM_TECH_MESURE = 0x1F4CF,           // 📏 - STRAIGHT RULER
  SYM_TECH_CALIBRE = 0x1F4D0,          // 📐 - TRIANGULAR RULER
  SYM_TECH_MICROMETRE = 0x1F52D,       // 🔬 - MICROSCOPE
  SYM_TECH_OSCILLOSCOPE = 0x1F4C8,     // 📈 - CHART WITH UPWARDS TREND
  SYM_TECH_GENERATEUR_SIG = 0x1F4E1,   // 📡 - SATELLITE ANTENNA
  SYM_TECH_ANALYSEUR_SPECTRE = 0x1F308,// 🌈 - RAINBOW
  SYM_TECH_MULTIMETRE = 0x1F50C,       // 🔌 - ELECTRIC PLUG
  SYM_TECH_THERMOMETRE_INFRA = 0x1F525,// 🔥 - FIRE
  SYM_TECH_CAMERA_THERMIQUE = 0x1F441, // 👁️ - EYE
  SYM_TECH_VISEUR_LASER = 0x1F3AF,     // 🎯 - DIRECT HIT
  SYM_TECH_STATION_TOTALE = 0x1F4CD,   // 📍 - ROUND PUSHPIN
  SYM_TECH_IMPRIMANTE_3D = 0x1F5B8,    // 🖨️ - PRINTER
  SYM_TECH_SCANNER_3D = 0x1F4F8,       // 📸 - CAMERA WITH FLASH
  SYM_TECH_FRAISEUSE_CNC = 0x2699,     // ⚙️ - GEAR
  SYM_TECH_SOUDEUSE = 0x1F525,         // 🔥 - FIRE
  SYM_TECH_DECAPEUSE = 0x1F9F9,        // 🧹 - BROOM
  SYM_TECH_PISTOLET_PEINTURE = 0x1F3A8,// 🎨 - ARTIST PALETTE
};
#endif

// ------------------------------------------------------------
// FLÈCHES UTF-8
// ------------------------------------------------------------
#ifdef SYMBOLES_FLECHES_UTF8
enum SymbolesFleches {
  SYM_FLECHE_HAUT = 0x2191,            // ↑ - UPWARDS ARROW
  SYM_FLECHE_BAS = 0x2193,             // ↓ - DOWNWARDS ARROW
  SYM_FLECHE_GAUCHE = 0x2190,          // ← - LEFTWARDS ARROW
  SYM_FLECHE_DROITE = 0x2192,          // → - RIGHTWARDS ARROW
  SYM_FLECHE_HAUT_DROITE = 0x2197,     // ↗ - NORTH EAST ARROW
  SYM_FLECHE_HAUT_GAUCHE = 0x2196,     // ↖ - NORTH WEST ARROW
  SYM_FLECHE_BAS_DROITE = 0x2198,      // ↘ - SOUTH EAST ARROW
  SYM_FLECHE_BAS_GAUCHE = 0x2199,      // ↙ - SOUTH WEST ARROW
  SYM_FLECHE_DOUBLE_HAUT = 0x21D1,     // ⇑ - UPWARDS DOUBLE ARROW
  SYM_FLECHE_DOUBLE_BAS = 0x21D3,      // ⇓ - DOWNWARDS DOUBLE ARROW
  SYM_FLECHE_DOUBLE_GAUCHE = 0x21D0,   // ⇐ - LEFTWARDS DOUBLE ARROW
  SYM_FLECHE_DOUBLE_DROITE = 0x21D2,   // ⇒ - RIGHTWARDS DOUBLE ARROW
  SYM_FLECHE_CURVE_GAUCHE = 0x21B6,    // ↶ - ANTICLOCKWISE TOP SEMICIRCLE ARROW
  SYM_FLECHE_CURVE_DROITE = 0x21B7,    // ↷ - CLOCKWISE TOP SEMICIRCLE ARROW
  SYM_FLECHE_RETOUR = 0x21A9,          // ↩ - LEFTWARDS ARROW WITH HOOK
  SYM_FLECHE_REDEMARRER = 0x21AA,      // ↪ - RIGHTWARDS ARROW WITH HOOK
  SYM_FLECHE_DROITE_CERCLE = 0x27A1,   // ➡️ - BLACK RIGHTWARDS ARROW
  SYM_FLECHE_GAUCHE_CERCLE = 0x2B05,   // ⬅️ - LEFTWARDS BLACK ARROW
  SYM_FLECHE_UP_DOWN = 0x2195,         // ↕ - UP DOWN ARROW
  SYM_FLECHE_LEFT_RIGHT = 0x2194,      // ↔ - LEFT RIGHT ARROW
  SYM_FLECHE_NORD = 0x2191,            // ↑ - UPWARDS ARROW
  SYM_FLECHE_SUD = 0x2193,             // ↓ - DOWNWARDS ARROW
  SYM_FLECHE_EST = 0x2192,             // → - RIGHTWARDS ARROW
  SYM_FLECHE_OUEST = 0x2190,           // ← - LEFTWARDS ARROW
  SYM_FLECHE_DROITE_EPAI = 0x27A1,     // ➡️ - BLACK RIGHTWARDS ARROW
  SYM_FLECHE_BAS_EPAI = 0x2B07,        // ⬇️ - DOWNWARDS BLACK ARROW
  SYM_TRIANGLE_HAUT = 0x25B2,          // ▲ - BLACK UP-POINTING TRIANGLE
  SYM_TRIANGLE_BAS = 0x25BC,           // ▼ - BLACK DOWN-POINTING TRIANGLE
};
#endif

// ------------------------------------------------------------
// MÉTÉO UTF-8
// ------------------------------------------------------------
#ifdef SYMBOLES_METEO_UTF8
enum SymbolesMeteo {
  SYM_METEO_SOLEIL = 0x2600,           // ☀️ - BLACK SUN WITH RAYS
  SYM_METEO_NUAGE_SOLEIL = 0x26C5,     // ⛅ - SUN BEHIND CLOUD
  SYM_METEO_NUAGE = 0x2601,            // ☁️ - CLOUD
  SYM_METEO_NUAGE_PLUVIEUX = 0x1F327,  // 🌧️ - CLOUD WITH RAIN
  SYM_METEO_PLUIE = 0x1F327,           // 🌧️ - CLOUD WITH RAIN
  SYM_METEO_ORAGE = 0x26C8,            // ⛈️ - THUNDER CLOUD AND RAIN
  SYM_METEO_NEIGE = 0x1F328,           // 🌨️ - CLOUD WITH SNOW
  SYM_METEO_BROUILLARD = 0x1F32B,      // 🌫️ - FOG
  SYM_METEO_VENT = 0x1F4A8,            // 💨 - DASH SYMBOL
  SYM_METEO_ARC_EN_CIEL = 0x1F308,     // 🌈 - RAINBOW
  SYM_METEO_LUNE = 0x1F319,            // 🌙 - CRESCENT MOON
  SYM_METEO_ECLIPSE = 0x1F311,         // 🌑 - NEW MOON SYMBOL
  SYM_METEO_THERMOMETRE = 0x1F321,     // 🌡️ - THERMOMETER
  SYM_METEO_HYGROMETRE = 0x1F4A7,      // 💧 - DROPLET
  SYM_METEO_BAROMETRE = 0x1F4CA,       // 📊 - BAR CHART
  SYM_METEO_ANEMOMETRE = 0x1F343,      // 🍃 - LEAF FLUTTERING IN WIND
  SYM_METEO_GIRQUETTE = 0x2B07,        // ⬇️ - DOWNWARDS BLACK ARROW
  SYM_METEO_UV = 0x2600,               // ☀️ - BLACK SUN WITH RAYS
  SYM_METEO_HUMIDITE = 0x1F4A6,        // 💦 - SPLASHING SWEAT SYMBOL
  SYM_METEO_PRESSION = 0x1F4C9,        // 📉 - CHART DOWNWARDS
  SYM_METEO_TEMPERATURE = 0x1F321,     // 🌡️ - THERMOMETER
  SYM_METEO_VISIBILITE = 0x1F441,      // 👁️ - EYE
  SYM_METEO_SUNRISE = 0x1F305,         // 🌅 - SUNRISE
  SYM_METEO_SUNSET = 0x1F307,          // 🌇 - SUNSET OVER BUILDINGS
  SYM_METEO_ALERTE = 0x26A0,           // ⚠️ - WARNING SIGN
  SYM_METEO_TORNADE = 0x1F32A,         // 🌪️ - CLOUD WITH TORNADO
  SYM_METEO_INONDATION = 0x1F30A,      // 🌊 - WATER WAVE
  SYM_METEO_SOLEIL_VISAGE = 0x1F31E,   // 🌞 - SUN WITH FACE
  SYM_METEO_FLOCON = 0x2744,           // ❄️ - SNOWFLAKE
  SYM_METEO_PLANETE = 0x1F30D,         // 🌍 - EARTH GLOBE EUROPE-AFRICA
};
#endif

// ------------------------------------------------------------
// SYMBOLES DE TEMPS ET HORLOGE
// ------------------------------------------------------------
#ifdef SYMBOLES_TEMPS_UTF8
enum SymbolesTemps {
  SYM_TEMPS_HORLOGE = 0x1F552,         // 🕒 - CLOCK FACE THREE O'CLOCK
  SYM_TEMPS_CHRONOMETRE = 0x23F1,      // ⏱️ - STOPWATCH
  SYM_TEMPS_REVEIL = 0x23F0,           // ⏰ - ALARM CLOCK
  SYM_TEMPS_AGENDA = 0x1F4C5,          // 📅 - CALENDAR
  SYM_TEMPS_FUSEAU = 0x1F310,          // 🌐 - GLOBE WITH MERIDIANS
  SYM_TEMPS_CALENDRIER = 0x1F4C6,      // 📆 - TEAR-OFF CALENDAR
  SYM_TEMPS_SABLIER = 0x23F3,          // ⏳ - HOURGLASS WITH FLOWING SAND
  SYM_TEMPS_SABLIER_PLEIN = 0x231B,    // ⌛ - HOURGLASS
  SYM_TEMPS_MONTRE = 0x231A,           // ⌚ - WATCH
  SYM_TEMPS_HORLOGA_ALARME = 0x23F0,   // ⏰ - ALARM CLOCK
  SYM_TEMPS_SYNCHRO = 0x1F504,         // 🔄 - ANTICLOCKWISE DOWNWARDS AND UPWARDS OPEN CIRCLE ARROWS
};
#endif

// ------------------------------------------------------------
// SYMBOLES D'ÉTAT ET NOTIFICATION
// ------------------------------------------------------------
#ifdef SYMBOLES_ETAT_UTF8
enum SymbolesEtat {
  SYM_ETAT_OK = 0x2705,                // ✅ - WHITE HEAVY CHECK MARK
  SYM_ETAT_ERREUR = 0x274C,            // ❌ - CROSS MARK
  SYM_ETAT_ATTENTION = 0x26A0,         // ⚠️ - WARNING SIGN
  SYM_ETAT_QUESTION = 0x2753,          // ❓ - BLACK QUESTION MARK ORNAMENT
  SYM_ETAT_ANNONCE = 0x1F4E3,          // 📢 - PUBLIC ADDRESS LOUDSPEAKER
  SYM_ETAT_FONCTIONNALITE = 0x2728,    // ✨ - SPARKLES
  SYM_ETAT_VERROUILLE = 0x1F512,       // 🔒 - LOCK
  SYM_ETAT_DEVERROUILLE = 0x1F513,     // 🔓 - OPEN LOCK
  SYM_ETAT_CLEF = 0x1F511,             // 🔑 - KEY
  SYM_ETAT_CIBLE = 0x1F3AF,            // 🎯 - DIRECT HIT
  SYM_ETAT_LOUPE = 0x1F50D,            // 🔍 - LEFT-POINTING MAGNIFYING GLASS
  SYM_ETAT_LOUPE_ZOOM = 0x1F50E,       // 🔎 - RIGHT-POINTING MAGNIFYING GLASS
  SYM_ETAT_PUNAISE = 0x1F4CC,          // 📌 - PUSHPIN
  SYM_ETAT_DRAPEAU = 0x1F6A9,          // 🚩 - TRIANGULAR FLAG ON POST
  SYM_ETAT_ETOILE = 0x2B50,            // ⭐ - WHITE MEDIUM STAR
  SYM_ETAT_COEUR = 0x2764,             // ❤️ - HEAVY BLACK HEART
  SYM_ETAT_SMILEY = 0x1F60A,           // 😊 - SMILING FACE WITH SMILING EYES
  SYM_ETAT_THUMBS_UP = 0x1F44D,        // 👍 - THUMBS UP SIGN
  SYM_ETAT_THUMBS_DOWN = 0x1F44E,      // 👎 - THUMBS DOWN SIGN
  SYM_ETAT_CORDE_A_NOEUD = 0x1F91E,    // 🤞 - HAND WITH INDEX AND MIDDLE FINGERS CROSSED
  SYM_ETAT_MAIN_CHECK = 0x1F91D,       // 🤝 - HANDSHAKE
  SYM_ETAT_CHECKLIST = 0x1F4CB,        // 📋 - CLIPBOARD
  SYM_ETAT_TELEPHONE = 0x1F4DE,        // 📞 - TELEPHONE RECEIVER
  SYM_ETAT_ALERTE = 0x1F6A8,           // 🚨 - POLICE CARS REVOLVING LIGHT
  SYM_ETAT_FEU_VERT = 0x1F7E2,         // 🟢 - LARGE GREEN CIRCLE
  SYM_ETAT_FEU_ROUGE = 0x1F534,        // 🔴 - LARGE RED CIRCLE
  SYM_ETAT_FEU_ORANGE = 0x1F7E0,       // 🟠 - LARGE ORANGE CIRCLE
  SYM_ETAT_SIRENE = 0x1F6A8,           // 🚨 - POLICE CARS REVOLVING LIGHT
  SYM_ETAT_INTERDIT = 0x1F6AB,         // 🚫 - NO ENTRY SIGN
  SYM_ETAT_AUTORISE = 0x2705,          // ✅ - WHITE HEAVY CHECK MARK
  SYM_ETAT_EN_COURS = 0x1F504,         // 🔄 - ANTICLOCKWISE DOWNWARDS AND UPWARDS OPEN CIRCLE ARROWS
  SYM_ETAT_TERMINE = 0x2705,           // ✅ - WHITE HEAVY CHECK MARK
  SYM_ETAT_ECHEC = 0x274C,             // ❌ - CROSS MARK
  SYM_ETAT_PAUSE = 0x23F8,             // ⏸️ - DOUBLE VERTICAL BAR
  SYM_ETAT_PLAY = 0x25B6,              // ▶️ - BLACK RIGHT-POINTING TRIANGLE
  SYM_ETAT_STOP = 0x23F9,              // ⏹️ - BLACK SQUARE FOR STOP
  SYM_ETAT_CHARGEMENT = 0x23F3,        // ⏳ - HOURGLASS WITH FLOWING SAND
  SYM_ETAT_TELECHARGEMENT = 0x2B07,    // ⬇️ - DOWNWARDS BLACK ARROW
  SYM_ETAT_UPLOAD = 0x2B06,            // ⬆️ - UPWARDS BLACK ARROW
  SYM_ETAT_ETIQUETTE = 0x1F3F7,        // 🏷️ - LABEL
};
#endif

// ------------------------------------------------------------
// SYMBOLES D'OUTILS ET TECHNOLOGIE
// ------------------------------------------------------------
#ifdef SYMBOLES_OUTILS_UTF8
enum SymbolesOutils {
  SYM_OUTIL_ORDINATEUR = 0x1F4BB,      // 💻 - PERSONAL COMPUTER
  SYM_OUTIL_ENGRENAGE = 0x2699,        // ⚙️ - GEAR
  SYM_OUTIL_CLEF_PLATE = 0x1F527,      // 🔧 - WRENCH
  SYM_OUTIL_OUTILS = 0x1F6E0,          // 🛠️ - HAMMER AND WRENCH
  SYM_OUTIL_MARTEAU = 0x1F528,         // 🔨 - HAMMER
  SYM_OUTIL_ECROU = 0x1F529,           // 🔩 - NUT AND BOLT
  SYM_OUTIL_EPROUVETTE = 0x1F9EA,      // 🧪 - TEST TUBE
  SYM_OUTIL_PALETTE = 0x1F3A8,         // 🎨 - ARTIST PALETTE
  SYM_OUTIL_LIVRE = 0x1F4D6,           // 📖 - OPEN BOOK
  SYM_OUTIL_LIVRES = 0x1F4DA,          // 📚 - BOOKS
  SYM_OUTIL_FICHIER = 0x1F4C4,         // 📄 - PAGE FACING UP
  SYM_OUTIL_DOSSIER = 0x1F4C1,         // 📁 - FILE FOLDER
  SYM_OUTIL_DOSSIER_2 = 0x1F5C2,       // 🗂️ - CARD INDEX DIVIDERS
  SYM_OUTIL_DOSSIER_OUVERT = 0x1F4C2,  // 📂 - OPEN FILE FOLDER
  SYM_OUTIL_CERVEAU = 0x1F9E0,         // 🧠 - BRAIN
  SYM_OUTIL_BALEINE = 0x1F40B,         // 🐋 - WHALE
  SYM_OUTIL_BUG = 0x1F41B,             // 🐛 - BUG
  SYM_OUTIL_PARABOLE = 0x1F4E1,        // 📡 - SATELLITE ANTENNA
  SYM_OUTIL_SYNTHESE = 0x1F4DD,        // 📝 - MEMO
  SYM_OUTIL_AMPOULE = 0x1F4A1,         // 💡 - LIGHT BULB
  SYM_OUTIL_ECLAIR = 0x26A1,           // ⚡ - HIGH VOLTAGE SIGN
  SYM_OUTIL_PILE = 0x1F50B,            // 🔋 - BATTERY
  SYM_OUTIL_PAQUET = 0x1F4E6,          // 📦 - PACKAGE
  SYM_OUTIL_MAISON = 0x1F3E0,          // 🏠 - HOUSE BUILDING
  SYM_OUTIL_PLANETE = 0x1F30D,         // 🌍 - EARTH GLOBE EUROPE-AFRICA
  SYM_OUTIL_FUSEE = 0x1F680,           // 🚀 - ROCKET
  SYM_OUTIL_NETTOYER = 0x1F9F9,        // 🧹 - BROOM
  SYM_OUTIL_RECYCLE = 0x267B,          // ♻️ - BLACK UNIVERSAL RECYCLING SYMBOL
  SYM_OUTIL_HISTOGRAMME = 0x1F4CA,     // 📊 - BAR CHART
  SYM_OUTIL_GRAPHIQUE = 0x1F4C8,       // 📈 - CHART WITH UPWARDS TREND
  SYM_OUTIL_GRAPHIQUE_BAS = 0x1F4C9,   // 📉 - CHART DOWNWARDS
  SYM_OUTIL_STATISTIQUES = 0x1F4CA,    // 📊 - BAR CHART
  SYM_OUTIL_CLOUD = 0x2601,            // ☁️ - CLOUD
  SYM_OUTIL_WIFI = 0x1F4F6,            // 📶 - ANTENNA WITH BARS
  SYM_OUTIL_SD_CARD = 0x1F4BE,         // 💾 - FLOPPY DISK
  SYM_OUTIL_IMPRIMANTE = 0x1F5A8,      // 🖨️ - PRINTER
  SYM_OUTIL_CAMERA = 0x1F4F8,          // 📸 - CAMERA WITH FLASH
  SYM_OUTIL_ECOUTEURS = 0x1F3A7,       // 🎧 - HEADPHONE
  SYM_OUTIL_ECRAN = 0x1F4FA,           // 📺 - TELEVISION
  SYM_OUTIL_LASER = 0x1F52D,           // 🔦 - FLASHLIGHT
  SYM_OUTIL_BOUSSOLE = 0x1F9ED,        // 🧭 - COMPASS
  SYM_OUTIL_GPS = 0x1F4CD,             // 📍 - ROUND PUSHPIN
};
#endif

// ------------------------------------------------------------
// SYMBOLES NUMÉRIQUES ET CHIFFRES ENTOURÉS
// ------------------------------------------------------------
#ifdef SYMBOLES_NUMERIQUES_UTF8
enum SymbolesNumeriques {
  SYM_NUM_1 = 0x0031,                  // 1 - DIGIT ONE
  SYM_NUM_2 = 0x0032,                  // 2 - DIGIT TWO
  SYM_NUM_3 = 0x0033,                  // 3 - DIGIT THREE
  SYM_NUM_4 = 0x0034,                  // 4 - DIGIT FOUR
  SYM_NUM_5 = 0x0035,                  // 5 - DIGIT FIVE
  SYM_NUM_6 = 0x0036,                  // 6 - DIGIT SIX
  SYM_NUM_7 = 0x0037,                  // 7 - DIGIT SEVEN
  SYM_NUM_8 = 0x0038,                  // 8 - DIGIT EIGHT
  SYM_NUM_9 = 0x0039,                  // 9 - DIGIT NINE
  SYM_NUM_10 = 0x0031,                 // 1 - DIGIT ONE (pas de "10" spécial)
  SYM_NUM_0 = 0x0030,                  // 0 - DIGIT ZERO
};
#endif

// =============================================
// FONCTIONS DE CONVERSION UTF-8
// =============================================

/**
 * Convertit un code Unicode en chaîne UTF-8
 */
String unicodeToUTF8(unsigned int unicode) {
  String result;
  
  if (unicode <= 0x7F) {
    // 1 octet: 0xxxxxxx (ASCII)
    result += (char)unicode;
  } else if (unicode <= 0x7FF) {
    // 2 octets: 110xxxxx 10xxxxxx
    result += (char)(0xC0 | (unicode >> 6));
    result += (char)(0x80 | (unicode & 0x3F));
  } else if (unicode <= 0xFFFF) {
    // 3 octets: 1110xxxx 10xxxxxx 10xxxxxx
    result += (char)(0xE0 | (unicode >> 12));
    result += (char)(0x80 | ((unicode >> 6) & 0x3F));
    result += (char)(0x80 | (unicode & 0x3F));
  } else if (unicode <= 0x10FFFF) {
    // 4 octets: 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
    result += (char)(0xF0 | (unicode >> 18));
    result += (char)(0x80 | ((unicode >> 12) & 0x3F));
    result += (char)(0x80 | ((unicode >> 6) & 0x3F));
    result += (char)(0x80 | (unicode & 0x3F));
  }
  
  return result;
}

/**
 * Fonction principale - Retourne TOUJOURS une chaîne UTF-8
 * Utilise les codes Unicode directs
 */
String getSymboleUTF8(unsigned int code) {
  // Pour ASCII simple (0-127), retourne directement
  if (code <= 127) {
    return String((char)code);
  }
  
  // Pour tous les autres symboles, utilise la conversion UTF-8
  return unicodeToUTF8(code);
}

/**
 * Version pour les caractères ASCII
 */
String getSymboleUTF8(char asciiChar) {
  return String(asciiChar);
}

/**
 * Version pour les énumérations de symboles
 */
template<typename T>
String getSymboleUTF8(T symbole) {
  return getSymboleUTF8(static_cast<unsigned int>(symbole));
}

// =============================================
// FONCTIONS UTILITAIRES (gardées de l'original)
// =============================================

/**
 * Crée une chaîne avec exposant
 */
String avecExposant(const String& base, const String& exposant) {
  #ifdef SYMBOLES_MATHS_UTF8
  String result = base;
  result += getSymboleUTF8(SYM_MATHS_EXPOSANT_PAREN_G);
  for (size_t i = 0; i < exposant.length(); i++) {
    char c = exposant[i];
    switch(c) {
      case '0': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_0); break;
      case '1': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_1); break;
      case '2': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_2); break;
      case '3': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_3); break;
      case '4': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_4); break;
      case '5': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_5); break;
      case '6': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_6); break;
      case '7': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_7); break;
      case '8': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_8); break;
      case '9': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_9); break;
      case '+': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_PLUS); break;
      case '-': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_MOINS); break;
      case '=': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_EGAL); break;
      case '(': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_PAREN_G); break;
      case ')': result += getSymboleUTF8(SYM_MATHS_EXPOSANT_PAREN_D); break;
      default: result += c;
    }
  }
  result += getSymboleUTF8(SYM_MATHS_EXPOSANT_PAREN_D);
  return result;
  #else
  return base + "^" + exposant;
  #endif
}

/**
 * Crée une chaîne avec indice
 */
String avecIndice(const String& base, const String& indice) {
  #ifdef SYMBOLES_MATHS_UTF8
  String result = base;
  result += getSymboleUTF8(SYM_MATHS_INDICE_PAREN_G);
  for (size_t i = 0; i < indice.length(); i++) {
    char c = indice[i];
    switch(c) {
      case '0': result += getSymboleUTF8(SYM_MATHS_INDICE_0); break;
      case '1': result += getSymboleUTF8(SYM_MATHS_INDICE_1); break;
      case '2': result += getSymboleUTF8(SYM_MATHS_INDICE_2); break;
      case '3': result += getSymboleUTF8(SYM_MATHS_INDICE_3); break;
      case '4': result += getSymboleUTF8(SYM_MATHS_INDICE_4); break;
      case '5': result += getSymboleUTF8(SYM_MATHS_INDICE_5); break;
      case '6': result += getSymboleUTF8(SYM_MATHS_INDICE_6); break;
      case '7': result += getSymboleUTF8(SYM_MATHS_INDICE_7); break;
      case '8': result += getSymboleUTF8(SYM_MATHS_INDICE_8); break;
      case '9': result += getSymboleUTF8(SYM_MATHS_INDICE_9); break;
      case '+': result += getSymboleUTF8(SYM_MATHS_INDICE_PLUS); break;
      case '-': result += getSymboleUTF8(SYM_MATHS_INDICE_MOINS); break;
      case '=': result += getSymboleUTF8(SYM_MATHS_INDICE_EGAL); break;
      case '(': result += getSymboleUTF8(SYM_MATHS_INDICE_PAREN_G); break;
      case ')': result += getSymboleUTF8(SYM_MATHS_INDICE_PAREN_D); break;
      default: result += c;
    }
  }
  result += getSymboleUTF8(SYM_MATHS_INDICE_PAREN_D);
  return result;
  #else
  return base + "_" + indice;
  #endif
}

// =============================================
// FONCTIONS UTILITAIRES AVANCÉES
// =============================================

/**
 * Affiche une valeur avec unité formatée
 */
String valeurAvecUnite(float valeur, const String& unite, int decimales = 2) {
  String result = String(valeur, decimales);
  if (!unite.isEmpty()) {
    result += " ";
    result += unite;
  }
  return result;
}

/**
 * Affiche une valeur de résistance avec unité (Ω, kΩ, MΩ)
 */
String resistanceAvecUnite(float ohms) {
  String result;
  if (ohms >= 1000000) {
    result = String(ohms / 1000000, 2);
    result += " MΩ";
  } else if (ohms >= 1000) {
    result = String(ohms / 1000, 2);
    result += " kΩ";
  } else {
    result = String(ohms, 2);
    result += " Ω";
  }
  return result;
}

/**
 * Affiche une valeur de capacité avec unité (pF, nF, µF, mF, F)
 */
String capaciteAvecUnite(float farads) {
  String result;
  if (farads >= 1) {
    result = String(farads, 3);
    result += " F";
  } else if (farads >= 0.001) {
    result = String(farads * 1000, 3);
    result += " mF";
  } else if (farads >= 0.000001) {
    result = String(farads * 1000000, 3);
    result += " µF";
  } else if (farads >= 0.000000001) {
    result = String(farads * 1000000000, 3);
    result += " nF";
  } else {
    result = String(farads * 1000000000000, 3);
    result += " pF";
  }
  return result;
}

/**
 * Affiche une valeur de tension avec unité (V, mV, µV)
 */
String tensionAvecUnite(float volts) {
  String result;
  if (volts >= 1) {
    result = String(volts, 3);
    result += " V";
  } else if (volts >= 0.001) {
    result = String(volts * 1000, 3);
    result += " mV";
  } else {
    result = String(volts * 1000000, 3);
    result += " µV";
  }
  return result;
}

/**
 * Affiche une valeur de courant avec unité (A, mA, µA)
 */
String courantAvecUnite(float amperes) {
  String result;
  if (amperes >= 1) {
    result = String(amperes, 3);
    result += " A";
  } else if (amperes >= 0.001) {
    result = String(amperes * 1000, 3);
    result += " mA";
  } else {
    result = String(amperes * 1000000, 3);
    result += " µA";
  }
  return result;
}

// =============================================
// MACROS ET ALIAS (gardées de l'original)
// =============================================

// Alias pour compatibilité
#define getSymbole(code) getSymboleUTF8(code)

// Macros rapides
#define SYM_DEG()       getSymboleUTF8(SYM_DEGRE)
#define SYM_MICRO()     getSymboleUTF8(SYM_MICRO)
#define SYM_PLUS_MINUS() getSymboleUTF8(SYM_PLUS_MINUS)
#define SYM_POW2()      getSymboleUTF8(SYM_PUISSANCE_2)
#define SYM_POW3()      getSymboleUTF8(SYM_PUISSANCE_3)
#define SYM_INFINI()    getSymboleUTF8(SYM_INFINI)
#define SYM_PI()        getSymboleUTF8(SYM_PI)

#define SYM_FLECHE_HAUT() getSymboleUTF8(SYM_FLECHE_HAUT)
#define SYM_FLECHE_BAS()  getSymboleUTF8(SYM_FLECHE_BAS)
#define SYM_FLECHE_DROITE() getSymboleUTF8(SYM_FLECHE_DROITE)
#define SYM_FLECHE_GAUCHE() getSymboleUTF8(SYM_FLECHE_GAUCHE)

#define SYM_METEO_SOLEIL() getSymboleUTF8(SYM_METEO_SOLEIL)
#define SYM_METEO_THERMO() getSymboleUTF8(SYM_METEO_THERMOMETRE)
#define SYM_METEO_HYGRO()  getSymboleUTF8(SYM_METEO_HYGROMETRE)
#define SYM_METEO_FLOCON() getSymboleUTF8(SYM_METEO_FLOCON)
#define SYM_METEO_PLANETE() getSymboleUTF8(SYM_METEO_PLANETE)

// Macros pour les fractions
#ifdef SYMBOLES_MATHS_UTF8
#define SYM_FRAC_1_2() getSymboleUTF8(SYM_MATHS_FRACTION_1_2)
#define SYM_FRAC_1_4() getSymboleUTF8(SYM_MATHS_FRACTION_1_4)
#define SYM_FRAC_3_4() getSymboleUTF8(SYM_MATHS_FRACTION_3_4)
#define SYM_FRAC_1_3() getSymboleUTF8(SYM_MATHS_FRACTION_1_3)
#define SYM_FRAC_2_3() getSymboleUTF8(SYM_MATHS_FRACTION_2_3)
#endif

// Macros pour les symboles électriques
#ifdef SYMBOLES_ELECTRIQUE_UTF8
#define SYM_RESISTANCE()      getSymboleUTF8(SYM_ELEC_RESISTANCE)
#define SYM_DIODE()           getSymboleUTF8(SYM_ELEC_DIODE)
#define SYM_TRANSISTOR_NPN()  getSymboleUTF8(SYM_ELEC_TRANSISTOR_NPN)
#define SYM_TRANSISTOR_PNP()  getSymboleUTF8(SYM_ELEC_TRANSISTOR_PNP)
#define SYM_PILE()            getSymboleUTF8(SYM_ELEC_PILE)
#define SYM_FUSIBLE()         getSymboleUTF8(SYM_ELEC_FUSIBLE)
#define SYM_INTERRUPTEUR()    getSymboleUTF8(SYM_ELEC_INTERRUPTEUR)
#define SYM_ECLAIR()          getSymboleUTF8(SYM_ELEC_ECLAIR)
#define SYM_MASSE()           getSymboleUTF8(SYM_ELEC_MASSE)
#endif

// Macros pour les capteurs
#ifdef SYMBOLES_CAPTEURS_UTF8
#define SYM_CAPT_TEMP()       getSymboleUTF8(SYM_CAPT_TEMPERATURE)
#define SYM_CAPT_HUMID()      getSymboleUTF8(SYM_CAPT_HUMIDITE)
#define SYM_CAPT_LUM()        getSymboleUTF8(SYM_CAPT_LUMINOSITE)
#define SYM_CAPT_GPS()        getSymboleUTF8(SYM_CAPT_GPS)
#define SYM_CAPT_WIFI()       getSymboleUTF8(SYM_CAPT_WIFI)
#endif

// État
#define SYM_OK()          getSymboleUTF8(SYM_ETAT_OK)
#define SYM_ERREUR()      getSymboleUTF8(SYM_ETAT_ERREUR)
#define SYM_ATTENTION()   getSymboleUTF8(SYM_ETAT_ATTENTION)
#define SYM_QUESTION()    getSymboleUTF8(SYM_ETAT_QUESTION)

// Outils
#define SYM_ORDINATEUR()  getSymboleUTF8(SYM_OUTIL_ORDINATEUR)
#define SYM_ENGRENAGE()   getSymboleUTF8(SYM_OUTIL_ENGRENAGE)
#define SYM_ECLAIR()      getSymboleUTF8(SYM_OUTIL_ECLAIR)
#define SYM_PILE()        getSymboleUTF8(SYM_OUTIL_PILE)
#define SYM_FICHIER()     getSymboleUTF8(SYM_OUTIL_FICHIER)
#define SYM_DOSSIER()     getSymboleUTF8(SYM_OUTIL_DOSSIER)
#define SYM_FUSEE()       getSymboleUTF8(SYM_OUTIL_FUSEE)
#define SYM_MAISON()      getSymboleUTF8(SYM_OUTIL_MAISON)

/**
 * Crée un badge avec numéro
 */
String badgeNumerique(int numero) {
  #ifdef SYMBOLES_NUMERIQUES_UTF8
  switch(numero) {
    case 1: return getSymboleUTF8(SYM_NUM_1);
    case 2: return getSymboleUTF8(SYM_NUM_2);
    case 3: return getSymboleUTF8(SYM_NUM_3);
    case 4: return getSymboleUTF8(SYM_NUM_4);
    case 5: return getSymboleUTF8(SYM_NUM_5);
    case 6: return getSymboleUTF8(SYM_NUM_6);
    case 7: return getSymboleUTF8(SYM_NUM_7);
    case 8: return getSymboleUTF8(SYM_NUM_8);
    case 9: return getSymboleUTF8(SYM_NUM_9);
    case 10: return getSymboleUTF8(SYM_NUM_10);
    case 0: return getSymboleUTF8(SYM_NUM_0);
    default: return "[" + String(numero) + "]";
  }
  #else
  return "[" + String(numero) + "]";
  #endif
}

/**
 * Crée un circuit électrique simple en ASCII art
 */
String circuitSimple(const String& composant1, const String& composant2) {
  String circuit;
  circuit += "┌───[" + composant1 + "]───[" + composant2 + "]───┐\n";
  circuit += "│                                         │\n";
  circuit += "└─────────────────────────────────────────┘";
  return circuit;
}

#endif // SYMBOLES_H