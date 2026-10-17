// Symboles.h - v1.1.0
// Bibliothèque de symboles avec conversion UTF-8 universelle
// Version avec #define pour économiser la mémoire Flash
// https://www.fileformat.info/info/emoji/list.htm
// ===========================================================

#ifndef SYMBOLES_H
#define SYMBOLES_H


// Version de la librairie (source UNIQUE — agrégée par liste_lib.h)
#define __SYMBOLES_H_VERSION__ "1.1.1"
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
#define SYMBOLES_RESEAU_UTF8

// =============================================
// CODES UNICODE RÉELS (en #define)
// =============================================

// ------------------------------------------------------------
// SYMBOLES DE BASE (Latin-1 et Unicode communs)
// ------------------------------------------------------------
// Les codes ASCII 0-127 restent identiques

// Symboles étendus avec codes Unicode réels
#define SYM_DEGRE               0x00B0   // ° - DEGREE SIGN
#define SYM_MICRO               0x00B5   // µ - MICRO SIGN
#define SYM_PLUS_MINUS          0x00B1   // ± - PLUS-MINUS SIGN
#define SYM_SUPERIEUR_EGAL      0x2265   // ≥ - GREATER-THAN OR EQUAL TO
#define SYM_INFERIEUR_EGAL      0x2264   // ≤ - LESS-THAN OR EQUAL TO
#define SYM_EGAL_APPROX         0x2248   // ≈ - ALMOST EQUAL TO
#define SYM_RACINE_CARREE       0x221A   // √ - SQUARE ROOT
#define SYM_PUISSANCE_2         0x00B2   // ² - SUPERSCRIPT TWO
#define SYM_PUISSANCE_3         0x00B3   // ³ - SUPERSCRIPT THREE
#define SYM_PUISSANCE_1         0x00B9   // ¹ - SUPERSCRIPT ONE
#define SYM_DIVISION            0x00F7   // ÷ - DIVISION SIGN
#define SYM_MULTIPLICATION      0x00D7   // × - MULTIPLICATION SIGN
#define SYM_INFINI              0x221E   // ∞ - INFINITY
#define SYM_INTEGRALE           0x222B   // ∫ - INTEGRAL
#define SYM_SOMME               0x03A3   // Σ - GREEK CAPITAL LETTER SIGMA
#define SYM_PI                  0x03C0   // π - GREEK SMALL LETTER PI
#define SYM_POUR_MILLE          0x2030   // ‰ - PER MILLE SIGN
#define SYM_BULLET              0x2022   // • - BULLET
#define SYM_POINT_MILIEU        0x00B7   // · - MIDDLE DOT
#define SYM_POINTS_SUSPENSION   0x2026   // … - HORIZONTAL ELLIPSIS
  
// Caractères accentués français
#define SYM_E_ACCENT_AIGU       0x00E9   // é
#define SYM_E_ACCENT_GRAVE      0x00E8   // è
#define SYM_E_CIRCONFLEXE       0x00EA   // ê
#define SYM_A_GRAVE             0x00E0   // à
#define SYM_A_CIRCONFLEXE       0x00E2   // â
#define SYM_C_CEDILLE           0x00E7   // ç
#define SYM_U_GRAVE             0x00F9   // ù
#define SYM_U_CIRCONFLEXE       0x00FB   // û
#define SYM_O_CIRCONFLEXE       0x00F4   // ô
// ------------------------------------------------------------
// SYMBOLES MATHÉMATIQUES UTF-8
// ------------------------------------------------------------
#ifdef SYMBOLES_MATHS_UTF8

// Fractions
#define SYM_FRACTION_0_3        0x2189   // ↉ fraction décimale zéro tiers
#define SYM_FRACTION_1_3        0x2153   // ⅓ fraction ordinaire un tiers
#define SYM_FRACTION_2_3        0x2154   // ⅔ fraction ordinaire deux tiers

#define SYM_FRACTION_1_2        0x00BD   // ½ fraction ordinaire un demi
#define SYM_FRACTION_1_4        0x00BC   // ¼ fraction ordinaire un quart
#define SYM_FRACTION_3_4        0x00BE   // ¾ fraction ordinaire trois quarts

#define SYM_FRACTION_1_5        0x2155   // ⅕ fraction ordinaire un cinquième
#define SYM_FRACTION_2_5        0x2156   // ⅖ fraction ordinaire deux cinquièmes
#define SYM_FRACTION_3_5        0x2157   // ⅗ fraction ordinaire trois cinquièmes
#define SYM_FRACTION_4_5        0x2158   // ⅘ fraction ordinaire quatre cinquième

#define SYM_FRACTION_1_6        0x2159   // ⅙ Fraction ordinaire un sixième
#define SYM_FRACTION_5_6        0x215A   // ⅚ Fraction ordinaire cinq sixièmes

#define SYM_FRACTION_1_8        0x215B   // ⅛ fraction ordinaire un huitième
#define SYM_FRACTION_3_8        0x215C   // ⅜ fraction ordinaire trois huitièmes
#define SYM_FRACTION_5_8        0x215D   // ⅝ fraction ordinaire cinq huitièmes
#define SYM_FRACTION_7_8        0x215E   // ⅞ fraction ordinaire sept huitièmes

#define SYM_FRACTION_1_9        0x215F   // ⅟ fraction ordinaire un neuvième

#define SYM_FRACTION_1_10       0x2152   // ⅒ un dixième
// Exposants
#define SYM_EXPOSANT_0          0x2070   // ⁰ Exposant zéro
#define SYM_EXPOSANT_1          0x00B9   // ¹ Exposant un
#define SYM_EXPOSANT_2          0x00B2   // ² Exposant deux
#define SYM_EXPOSANT_3          0x00B3   // ³ Exposant trois
#define SYM_EXPOSANT_4          0x2074   // ⁴ Exposant quatre
#define SYM_EXPOSANT_5          0x2075   // ⁵ Exposant cinq
#define SYM_EXPOSANT_6          0x2076   // ⁶ Exposant six
#define SYM_EXPOSANT_7          0x2077   // ⁷ Exposant sept
#define SYM_EXPOSANT_8          0x2078   // ⁸ Exposant huit
#define SYM_EXPOSANT_9          0x2079   // ⁹ Exposant neuf
#define SYM_EXPOSANT_PLUS       0x207A   // ⁺ Exposant plus
#define SYM_EXPOSANT_MOINS      0x207B   // ⁻ Exposant moins
#define SYM_EXPOSANT_EGAL       0x207C   // ⁼ Exposant égal
#define SYM_EXPOSANT_PAREN_G    0x207D   // ⁽ Exposant parenthèse gauche  
#define SYM_EXPOSANT_PAREN_D    0x207E   // ⁾ Exposant parenthèse droite
#define SYM_EXPOSANT_I          0x2071   // ⁱ Exposant lettre minuscule latine i
#define SYM_EXPOSANT_N          0x207F   // ⁿ Exposant lettre minuscule latine n

// Indices
#define SYM_INDICE_0            0x2080   // ₀ Indice zéro
#define SYM_INDICE_1            0x2081   // ₁ Indice un
#define SYM_INDICE_2            0x2082   // ₂ Indice deux
#define SYM_INDICE_3            0x2083   // ₃ Indice trois
#define SYM_INDICE_4            0x2084   // ₄ Indice quatre
#define SYM_INDICE_5            0x2085   // ₅ Indice cinq
#define SYM_INDICE_6            0x2086   // ₆ Indice six
#define SYM_INDICE_7            0x2087   // ₇ Indice sept
#define SYM_INDICE_8            0x2088   // ₈ Indice huit
#define SYM_INDICE_9            0x2089   // ₉ Indice neuf
#define SYM_INDICE_PLUS         0x208A   // ₊ Indice plus
#define SYM_INDICE_MOINS        0x208B   // ₋ Indice moins
#define SYM_INDICE_EGAL         0x208C   // ₌ Indice égal
#define SYM_INDICE_PAREN_G      0x208D   // ₍ Indice parenthèse gauche
#define SYM_INDICE_PAREN_D      0x208E   // ₎ Indice parenthèse droite
#define SYM_INDICE_A            0x2090   // ₐ Indice lettre minuscule latine a
#define SYM_INDICE_E            0x2091   // ₑ Indice lettre minuscule latine e
#define SYM_INDICE_O            0x2092   // ₒ Indice lettre minuscule latine o
#define SYM_INDICE_X            0x2093   // ₓ Indice lettre minuscule latine x
#define SYM_INDICE_SCHWA        0x2094   // ₔ Indice lettre minuscule latine schwa

// Symboles mathématiques divers
// https://symbl.cc/fr/unicode/blocks/mathematical-operators/
#define SYM_PARALLELE           0x2225   // ∥
#define SYM_PERPENDICULAIRE     0x27C2   // ⟂
#define SYM_ANGLE               0x2220   // ∠
#define SYM_APPARTIENT          0x2208   // ∈
#define SYM_N_APPARTIENT_PAS    0x2209   // ∉
#define SYM_INCLUS              0x2282   // ⊂
#define SYM_N_INCLUS_PAS        0x2284   // ⊄
#define SYM_UNION               0x222A   // ∪
#define SYM_INTERSECTION        0x2229   // ∩
#define SYM_VIDE                0x2205   // ∅
#define SYM_ALEPH               0x2135   // ℵ
#define SYM_HBAR                0x210F   // ℏ
#define SYM_NABLA               0x2207   // ∇
#define SYM_PARTIAL             0x2202   // ∂
#define SYM_PRODUIT             0x220F   // ∏
#define SYM_PRIME               0x2032   // ′
#define SYM_DOUBLE_PRIME        0x2033   // ″
#define SYM_EQUIVALENT          0x2261   // ≡
#define SYM_DIFFERENT           0x2260   // ≠
#define SYM_PROPORTIONNEL       0x221D   // ∝
#define SYM_POUR_TOUT           0x2200   // ∀
#define SYM_IL_EXISTE           0x2203   // ∃
#define SYM_NON                 0x00AC   // ¬
#define SYM_ET                  0x2227   // ∧
#define SYM_OU                  0x2228   // ∨
#define SYM_CERCLE_PLUS         0x2295   // ⊕
#define SYM_CERCLE_MOINS        0x2296   // ⊖
#define SYM_CERCLE_TIMES        0x2297   // ⊗
#define SYM_CERCLE_DIVIDE       0x2298   // ⊘
#define SYM_INFINI              0x221E   // ∞ Infini
#define SYM_BEACOUP_PLUS_PETIT  0x226A   // ≪ Beaucoup plus petit que
#define SYM_BEACOUP_PLUS_GRAND  0x226B   // ≫ Beaucoup plus grand que
#define SYM_CONSIDERABLEMENT_PETIT 0x22D8   // ⋘ Considérablement plus petit que
#define SYM_CONSIDERABLEMENT_GRAND 0x22D9   // ⋙ Considérablement plus grand que  
#define SYM_PLUS_ENCADRE        0x229E   // ⊞ Plus encadré
#define SYM_MOINS_ENCADRE       0x229F   // ⊟ Moins encadré
#define SYM_PLUS_CERCLE         0x2295   // ⊕ Plus cerclé
#define SYM_MOINS_CERCLE        0x2296   // ⊖ Moins cerclé
// Lettres grecques minuscules
#define SYM_ALPHA               0x03B1   // α
#define SYM_BETA                0x03B2   // β
#define SYM_GAMMA               0x03B3   // γ
#define SYM_DELTA               0x03B4   // δ
#define SYM_EPSILON             0x03B5   // ε
#define SYM_ZETA                0x03B6   // ζ
#define SYM_ETA                 0x03B7   // η
#define SYM_THETA               0x03B8   // θ
#define SYM_IOTA                0x03B9   // ι
#define SYM_KAPPA               0x03BA   // κ
#define SYM_LAMBDA              0x03BB   // λ
#define SYM_MU                  0x03BC   // μ
#define SYM_NU                  0x03BD   // ν
#define SYM_XI                  0x03BE   // ξ
#define SYM_OMICRON             0x03BF   // ο
#define SYM_PI                  0x03C0   // π - GREEK SMALL LETTER PI
#define SYM_RHO                 0x03C1   // ρ
#define SYM_SIGMA               0x03C3   // σ
#define SYM_TAU                 0x03C4   // τ
#define SYM_UPSILON             0x03C5   // υ
#define SYM_PHI                 0x03C6   // φ
#define SYM_CHI                 0x03C7   // χ
#define SYM_PSI                 0x03C8   // ψ
#define SYM_OMEGA               0x03C9   // ω

// Lettres grecques majuscules
#define SYM_ALPHA_MAJ           0x0391   // Α
#define SYM_BETA_MAJ            0x0392   // Β
#define SYM_GAMMA_MAJ           0x0393   // Γ
#define SYM_DELTA_MAJ           0x0394   // Δ
#define SYM_EPSILON_MAJ         0x0395   // Ε
#define SYM_ZETA_MAJ            0x0396   // Ζ
#define SYM_ETA_MAJ             0x0397   // Η
#define SYM_THETA_MAJ           0x0398   // Θ
#define SYM_IOTA_MAJ            0x0399   // Ι
#define SYM_KAPPA_MAJ           0x039A   // Κ
#define SYM_LAMBDA_MAJ          0x039B   // Λ
#define SYM_MU_MAJ              0x039C   // Μ
#define SYM_NU_MAJ              0x039D   // Ν
#define SYM_XI_MAJ              0x039E   // Ξ
#define SYM_OMICRON_MAJ         0x039F   // Ο
#define SYM_PI_MAJ              0x03A0   // Π
#define SYM_RHO_MAJ             0x03A1   // Ρ
#define SYM_SIGMA_MAJ           0x03A3   // Σ
#define SYM_TAU_MAJ             0x03A4   // Τ
#define SYM_UPSILON_MAJ         0x03A5   // Υ
#define SYM_PHI_MAJ             0x03A6   // Φ
#define SYM_CHI_MAJ             0x03A7   // Χ
#define SYM_PSI_MAJ             0x03A8   // Ψ
#define SYM_OMEGA_MAJ           0x03A9   // Ω

#endif

// ------------------------------------------------------------
// SYMBOLES ÉLECTRIQUES ET ÉLECTRONIQUES
// ------------------------------------------------------------

#ifdef SYMBOLES_ELECTRIQUE_UTF8
#define SYM_ELEC_CARRE_ENCADRE  0x29C8   // ⧈ Carré encadré
#define SYM_ELEC_EARTH_GROUND 0x23DA       // ⏚  - EARTH GROUND
#define SYM_ELEC_ECLAIR       0x26A1       // ⚡ - HIGH VOLTAGE SIGN
#define SYM_ELEC_FLECHE_BAS_ZIGZAG 0x21AF   // ↯ Flèche vers le bas en zigzag
#define SYM_ELEC_DIODE 0x23D3             // ⎓ - DISCRETE INTEGRATION SYMBOL
#define SYM_ELEC_DC 0x2393                   // ⎓
#define SYM_ELEC_DAC 0x23E6               // ⏦ - DIGITAL-TO-ANALOG CONVERTER SYMBOL
#define SYM_ELEC_ALTERNATIF 0x223F        // ∿ - SINE WAVE
#define SYM_ELEC_CO_H 0x238F // ⎏ Symbole sortie en circuit ouvert de type H
#define SYM_ELEC_CO_L 0x2390 // ⎐ Symbole sortie en circuit ouvert de type L
#define SYM_ELEC_HYST 0x238E // ⎎ Symbole hystérésis
#define SYM_ELEC_MONO 0x238D // ⎍ Symbole monostable
#endif

// ------------------------------------------------------------
// SYMBOLES DE CAPTEURS ET CAPTATION
// ------------------------------------------------------------
#ifdef SYMBOLES_CAPTEURS_UTF8

#endif

// ------------------------------------------------------------
// SYMBOLES TECHNIQUES ET INGÉNIERIE
// ------------------------------------------------------------
#ifdef SYMBOLES_TECHNIQUE_UTF8
#define SYM_TECH_PASSE_BAS      0x2242   // ≂ Moins tilde
#define SYM_TECH_PASSE_BAS_2    0x2A73   // ⩳ Signe égal sur opérateur tilde
#define SYM_TECH_PASSE_HAUT     0x2243   // ≃ Asymptotiquement égal À
#define SYM_TECH_PASSE_HAUT_2   0x2245   // ≅ Approximativement égal À
#define SYM_TECH_REJECTEUR_BANDE 0x2A6C  // ⩬ Similaire moins similaire
#endif

// ------------------------------------------------------------
// FLÈCHES UTF-8
// ------------------------------------------------------------
#ifdef SYMBOLES_FLECHES_UTF8
#define SYM_FLECHE_HAUT         0x2191   // ↑
#define SYM_FLECHE_BAS          0x2193   // ↓
#define SYM_FLECHE_GAUCHE       0x2190   // ←
#define SYM_FLECHE_DROITE       0x2192   // →
#define SYM_FLECHE_HAUT_DROITE  0x2197   // ↗
#define SYM_FLECHE_HAUT_GAUCHE  0x2196   // ↖
#define SYM_FLECHE_BAS_DROITE   0x2198   // ↘
#define SYM_FLECHE_BAS_GAUCHE   0x2199   // ↙
#define SYM_FLECHE_DOUBLE_HAUT  0x21D1   // ⇑
#define SYM_FLECHE_DOUBLE_BAS   0x21D3   // ⇓
#define SYM_FLECHE_DOUBLE_GAUCHE 0x21D0  // ⇐
#define SYM_FLECHE_DOUBLE_DROITE 0x21D2  // ⇒
#define SYM_FLECHE_RETOUR       0x21A9   // ↩
#define SYM_FLECHE_REDEMARRER   0x21AA   // ↪
#define SYM_FLECHE_UP_DOWN      0x2195   // ↕
#define SYM_FLECHE_LEFT_RIGHT   0x2194   // ↔
#define SYM_TRIANGLE_HAUT       0x25B2   // ▲
#define SYM_TRIANGLE_BAS        0x25BC   // ▼

#endif

// ------------------------------------------------------------
// MÉTÉO UTF-8
// ------------------------------------------------------------
#ifdef SYMBOLES_METEO_UTF8
#define SYM_METEO_SOLEIL        0x2600   // ☀️
#define SYM_METEO_NUAGE_SOLEIL  0x26C5   // ⛅
#define SYM_METEO_NUAGE         0x2601   // ☁️
#define SYM_METEO_PLUIE         0x1F327  // 🌧️
#define SYM_METEO_ORAGE         0x26C8   // ⛈️
#define SYM_METEO_NEIGE         0x1F328  // 🌨️
#define SYM_METEO_FLOCON        0x2744   // ❄️
#define SYM_METEO_BROUILLARD    0x1F32B  // 🌫️
#define SYM_METEO_VENT          0x1F4A8  // 💨
#define SYM_METEO_TORNADE       0x1F32A  // 🌪️
#define SYM_METEO_INONDATION    0x1F30A  // 🌊
#define SYM_METEO_ECLIPSE       0x1F311  // 🌑 Symbole de la nouvelle lune
#define SYM_METEO_LUNE_CROISSANTE 0x1F312  // 🌒 Symbole du premier croissant de lune
#define SYM_METEO_LUNE_PREMIER_QUARTIER 0x1F313  // 🌓 Symbole du premier quartier de lune
#define SYM_METEO_LUNE_GIBBEUSE_CROISSANTE 0x1F314  // 🌔 Symbole de la lune gibbeuse croissante
#define SYM_METEO_LUNE_PLEINE 0x1F315  // 🌕 Symbole de la pleine lune
#define SYM_METEO_LUNE_GIBBEUSE_DECROISSANTE 0x1F316  // 🌖 Symbole de la lune gibbeuse décroissante
#define SYM_METEO_LUNE_DERNIER_QUARTIER 0x1F317  // 🌗 Symbole du dernier quartier de lune
#define SYM_METEO_LUNE_DERNIER_CROISSANT 0x1F318  // 🌘 Symbole du dernier croissant de lune
#define SYM_METEO_LUNE          0x1F319  // 🌙
#define SYM_METEO_ARC_EN_CIEL   0x1F308  // 🌈
#define SYM_METEO_BONHOMME_DE_NEIGE_SANS_NEIGE 0x26C4  // ⛄ Bonhomme de neige sans neige
#define SYM_METEO_SOLEIL_NOIR_AVEC_RAYONS 0x2600  // ☀ Soleil noir avec rayons
#define SYM_METEO_SOLEIL_BLANC_AVEC_RAYONS 0x263C  // ☼ Soleil blanc avec rayons
#define SYM_METEO_PREMIER_QUARTIER_DE_LUNE 0x263D  // ☽ Premier quartier de lune
#define SYM_METEO_DERNIER_QUARTIER_DE_LUNE 0x263E  // ☾ Dernier quartier de lune
#define SYM_METEO_NUAGE         0x2601   // ☁ Nuage
#define SYM_METEO_PARAPLUIE     0x2602   // ☂ Parapluie
#define SYM_METEO_BONHOMME_DE_NEIGE 0x2603   // ☃ Bonhomme de neige
#define SYM_METEO_ALERTE        0x26A0   // ⚠️
#define SYM_RESEAU_DEGRE_CELSIUS         0x2103   // ℃   Degré Celsius
#define SYM_METEO_THERMOMETRE   0x1F321  // 🌡️ - THERMOMETER
#define SYM_METEO_HYGROMETRE    0x1F4A7  // 💧 - DROPLET
#define SYM_METEO_BAROMETRE     0x1F4CA  // 📊 - Histogramme
#define SYM_METEO_ANEMOMETRE    0x1F343  // 🍃 - LEAF FLUTTERING IN WIND

#define SYM_METEO_HUMIDITE      0x1F4A6  // 💦 - SPLASHING SWEAT SYMBOL
#define SYM_METEO_PRESSION_DWN  0x1F4C9  // 📉 - Courbe décroissante
#define SYM_METEO_PRESSION_UP   0x1F4C8  // 📈 - Courbe ascendante

#define SYM_METEO_SOLEIL_VISAGE 0x1F31E  // 🌞 - SUN WITH FACE
#define SYM_CAPT_INFRAROUGE        0x1F525  // 🔥 - FIRE
#define SYM_CAPT_RADIOACTIVITE     0x2622   // ☢️ - RADIOACTIVE SIGN
#define SYM_RESEAU_GLOBE_EUROPE        0x1F30D  // 🌍  Globe Europe-Afrique
#define SYM_RESEAU_GLOBE_AMERIQUES     0x1F30E  // 🌎  Globe Amériques
#define SYM_RESEAU_GLOBE_ASIE          0x1F30F  // 🌏  Globe Asie-Australie
#endif
// ------------------------------------------------------------
// SYMBOLES DE TEMPS ET HORLOGE
// ------------------------------------------------------------
#ifdef SYMBOLES_TEMPS_UTF8
#define SYM_TEMPS_REVEIL        0x23F0   // ⏰ Réveille matin
#define SYM_TEMPS_CHRONOMETRE   0x23F1   // ⏱️ Chronometre
#define SYM_TEMPS_MINUTERIE     0x23F2   // ⏲️ (minuterie / timer) 
#define SYM_TEMPS_AGENDA        0x1F4C5  // 📅
#define SYM_TEMPS_SABLIER       0x23F3   // ⏳ sablier avec coulée de sable
#define SYM_TEMPS_SABLIER_FIN   0x231B   // ⌛ - HOURGLASS
#define SYM_TEMPS_MONTRE        0x231A   // ⌚
#define SYM_TEMPS_FUSEAU        0x1F310  // 🌐 - GLOBE WITH MERIDIANS
#define SYM_TEMPS_CADRAN_1      0x1F550  // 🕐 Cadran d'horloge À une heure
#define SYM_TEMPS_CADRAN_2      0x1F551  // 🕑 Cadran d'horloge À deux heures
#define SYM_TEMPS_CADRAN_3      0x1F552  // 🕒 Cadran d'horloge À trois heures
#define SYM_TEMPS_CADRAN_4      0x1F553  // 🕓 Cadran d'horloge À quatre heures
#define SYM_TEMPS_CADRAN_5      0x1F554  // 🕔 Cadran d'horloge À cinq heures
#define SYM_TEMPS_CADRAN_6      0x1F555  // 🕕 Cadran d'horloge À six heures
#define SYM_TEMPS_CADRAN_7      0x1F556  // 🕖 Cadran d'horloge À sept heures
#define SYM_TEMPS_CADRAN_8      0x1F557  // 🕗 Cadran d'horloge À huit heures
#define SYM_TEMPS_CADRAN_9      0x1F558  // 🕘 Cadran d'horloge À neuf heures
#define SYM_TEMPS_CADRAN_10     0x1F559  // 🕙 Cadran d'horloge À dix heures
#define SYM_TEMPS_CADRAN_11     0x1F55A  // 🕚 Cadran d'horloge À onze heures
#define SYM_TEMPS_CADRAN_12     0x1F55B  // 🕛 Cadran d'horloge À douze heures
#endif

// ------------------------------------------------------------
// SYMBOLES D'ÉTAT ET NOTIFICATION
// ------------------------------------------------------------
#ifdef SYMBOLES_ETAT_UTF8
#define SYM_ETAT_OK             0x2705   // ✅
#define SYM_ETAT_COICHE         0x2713   // ✓ Coche
#define SYM_ETAT_CASE_BULLETIN_COICHE 0x1F5F9  // 🗹 Case de bulletin marquée d'une coche grasse
#define SYM_ETAT_ERREUR         0x274C   // ❌
#define SYM_ETAT_X_VOTE         0x2717   // ✗ de vote
#define SYM_ETAT_CASE_BULLETIN_X 0x1F5F7  // 🗷 Case de bulletin marquée d'un X cursif gras
#define SYM_ETAT_ATTENTION      0x26A0   // ⚠️
#define SYM_ETAT_QUESTION       0x2753   // ❓
#define SYM_ETAT_POINT_EXCLAMATION     0x2757   // ❗  Point d'exclamation
#define SYM_ETAT_DOUBLE_POINT_EXCLAMATION 0x203C   // ❗  Double point d'exclamation
#define SYM_ETAT_SIGNAL_DANGER  0x26A0   // ⚠ Signal de danger
#define SYM_ETAT_VERROUILLE     0x1F512  // 🔒
#define SYM_ETAT_DEVERROUILLE   0x1F513  // 🔓
// Symboles de protocoles (approximatifs)
#define SYM_RESEAU_CLE                 0x1F511  // 🔑  Clé
#define SYM_RESEAU_CLOUD_ORDI          0x1F5A7  // 🖧   Trois ordinateurs en réseau (non-emoji)
#define SYM_RESEAU_SYMBOLE_HTTP          0x1F310  // 🌐  Globe (HTTP/Web)
#define SYM_RESEAU_SYMBOLE_HTTPS         0x1F512  // 🔒  Cadenas (HTTPS sécurisé)
#define SYM_RESEAU_SYMBOLE_FTP           0x1F4E4  // 📤  Sortant (FTP upload)
#define SYM_RESEAU_SYMBOLE_SSH           0x1F510  // 🔐  Cadenas+clé (SSH)
#define SYM_RESEAU_SYMBOLE_VPN           0x1F512  // 🔒  Cadenas (VPN)
#define SYM_CAPT_WIFI              0x1F4E1  // 📡 - SATELLITE ANTENNA
#define SYM_CAPT_BLUETOOTH         0x1F4F6  // 📶 - ANTENNA WITH BARS
#define SYM_ETAT_MAIN_CHECK 0x1F91D       // 🤝 - HANDSHAKE
#define SYM_ETAT_CHECKLIST 0x1F4CB        // 📋 - CLIPBOARD
#define SYM_RESEAU_SYMBOLE_SMTP          0x1F4E7  // 📧  E-mail (SMTP)
#define SYM_RESEAU_SYMBOLE_POP3          0x1F4E8  // 📨  Entrant (POP3)
#define SYM_RESEAU_SYMBOLE_IMAP          0x1F4EC  // 📬  Boîte ouverte (IMAP)
#define SYM_RESEAU_SYMBOLE_SNMP          0x1F50D  // 🔍  Loupe (SNMP monitoring)
#define SYM_RESEAU_SYMBOLE_NTP           0x23F1   // ⏱️  Chronomètre (NTP temps)
// Communication
#define SYM_RESEAU_ENVELOPPE             0x2709   // ✉️  Enveloppe
#define SYM_RESEAU_EMAIL                 0x1F4E7  // 📧  E-mail
#define SYM_RESEAU_FLECHES_ECHANGE       0x1F500  // 🔀  Flèches croisées
#define SYM_RESEAU_CHAINON               0x1F517  // 🔗  Lien / chaîne
#define SYM_RESEAU_CLIP                  0x1F4CE  // 📎  Trombone
#define SYM_ETAT_CIBLE          0x1F3AF  // 🎯
#define SYM_CAPT_POSITION          0x1F4CD  // 📍 - ROUND PUSHPIN
#define SYM_ETAT_THUMBS_UP      0x1F44D  // 👍
#define SYM_ETAT_THUMBS_DOWN    0x1F44E  // 👎
#define SYM_ETAT_CERCLE_BLEU    0x1F535  // 🔵  Cercle bleu
#define SYM_ETAT_FEU_VERT       0x1F7E2  // 🟢
#define SYM_ETAT_CERCLE_JAUNE   0x1F7E1  // 🟡  Cercle jaune 
#define SYM_ETAT_FEU_ORANGE     0x1F7E0  // 🟠
#define SYM_ETAT_FEU_ROUGE      0x1F534  // 🔴
#define SYM_RESEAU_LED_VIOLET            0x1F7E3  // 🟣  LED violette
#define SYM_RESEAU_LED_NOIR              0x26AB   // ⚫  LED noire / éteinte
#define SYM_RESEAU_LED_BLANC             0x26AA   // ⚪  LED blanche
#define SYM_ETAT_INTERDIT       0x1F6AB  // 🚫
#define SYM_ETAT_PAUSE          0x23F8   // ⏸️
#define SYM_ETAT_PLAY           0x25B6   // ▶️
#define SYM_CAPT_ACCELERATION      0x23E9  // ⏩ - BLACK RIGHT-POINTING DOUBLE TRIANGLE
#define SYM_ETAT_STOP           0x23F9   // ⏹️
#define SYM_TECH_VALVE             0x23CF   // ⏏️ - EJECT SYMBOL
#define SYM_RESEAU_FLECHE_DBL_HAUT       0x23EB   // ⏫  Double flèche haut
#define SYM_RESEAU_FLECHE_DBL_BAS        0x23EC   // ⏬  Double flèche bas
#define SYM_RESEAU_FLECHES_ECHANGE       0x1F500  // 🔀  Flèches croisées
#define SYM_ETAT_CHARGEMENT     0x23F3   // ⏳
// Flèches directionnelles supplémentaires
#define SYM_RESEAU_FLECHE_DIAG_HAUT_D    0x2197   // ↗️  Diagonale haut-droite
#define SYM_RESEAU_FLECHE_DIAG_BAS_D     0x2198   // ↘️  Diagonale bas-droite
#define SYM_RESEAU_FLECHE_DIAG_BAS_G     0x2199   // ↙️  Diagonale bas-gauche
#define SYM_RESEAU_FLECHE_DIAG_HAUT_G    0x2196   // ↖️  Diagonale haut-gauche
#define SYM_RESEAU_FLECHE_RETOUR         0x21A9   // ↩️  Flèche retour
#define SYM_RESEAU_FLECHE_RETOUR_INV     0x21AA   // ↪️  Flèche retour 
#define SYM_ETAT_ANTICLOCKWISE  0x1F504  // 🔄 - ANTICLOCKWISE 
#define SYM_RESEAU_SYMBOLE_DHCP          0x1F504  // 🔃  Refresh (DHCP)
#define SYM_CAPT_PROXIMITE         0x2194   // ↔️ - LEFT RIGHT ARROW
#define SYM_FLECHE_DROITE_CERCLE   0x27A1  // ➡️ - BLACK RIGHTWARDS ARROW
#define SYM_FLECHE_GAUCHE_CERCLE   0x2B05  // ⬅️ - LEFTWARDS BLACK ARROW
#define SYM_FLECHE_DROITE_EPAI     0x27A1  // ➡️ - BLACK RIGHTWARDS ARROW
#define SYM_FLECHE_BAS_EPAI        0x2B07  // ⬇️ - DOWNWARDS BLACK ARROW
#define SYM_ETAT_COEUR          0x2764   // ❤️
#define SYM_ETAT_SMILEY         0x1F60A  // 😊
#define SYM_ETAT_VISAGE_NOIR_SOURIANT 0x263B   // ☻ Visage noir souriant
#define SYM_ETAT_TETE_DE_MORT 0x2620   // ☠ Tête de mort
#define SYM_ETAT_SIGNE_RADIOACTIVITE 0x2622   //  Signe de radioactivité
#define SYM_ETAT_SIGNE_DANGER_BIOLOGIQUE 0x2623   // ⚠ Signe de danger biologique
#define SYM_ETAT_SYMBOLE_ATOME 0x269B   // ⚛ Symbole atome
#define SYM_ETAT_SOURCES_CHAUDES 0x2668   // ♨ Sources chaudes
#define SYM_ETAT_PANNEAU_CONSTRUCTION 0x1F6A7   // 🚧 Panneau indicateur de construction
#define SYM_ETAT_STETHOSCOPE 0x1FA7A   // 🩺 Stethoscope
#define SYM_ELEC_PIEZO             0x1F3B5  // 🎵 - MUSICAL NOTE
#define SYM_ELEC_LED               0x1F4A1  // 💡 - LIGHT BULB
#define SYM_ELEC_LASER             0x1F52D  // 🔦 - FLASHLIGHT
#define SYM_CAPT_LUMINOSITE        0x1F506  // 🔆 - HIGH BRIGHTNESS SYMBOL
#define SYM_CAPT_VITESSE           0x1F680  // 🚀 - ROCKET
#define SYM_TECH_ROBOT             0x1F916  // 🤖 - ROBOT FACE
#define SYM_CAPT_EEG               0x1F9E0  // 🧠 - BRAIN
#define SYM_ETAT_DRAPEAU_EN_DAMIER 0x1F3C1   // 🏁 Drapeau en damier
#define SYM_ETAT_JOURNAL 0x1F4F0   // 📰 Journal
#define SYM_ETAT_CAFE 0x2615   // ☕ café
#define SYM_ETAT_CASE_BULLETIN 0x2610   // ☐ Case de bulletin
#define SYM_ETAT_CASE_BULLETIN_COICHE 0x2611   // ☑ Case de bulletin marquée d'une coche
#define SYM_ETAT_CASE_BULLETIN_X 0x2612   // ☒ Case de bulletin marquée d'un X
#define SYM_ETAT_SYMBOLE_PAPIER_PERMANENT 0x267E   // ♾ Symbole papier permanent
// https://www.compart.com/fr/unicode/block/U+0000
#define ASCii_NUL 0x0000 // NUL <Null> (NUL)
#define ASCii_SOH 0x0001 // SOH <Start of Heading> (SOH)
#define ASCii_STX 0x0002 // STX <Start of Text> (STX)
#define ASCii_ETX 0x0003 // ETX <End of Text> (ETX)
#define ASCii_EOT 0x0004 // EOT <End of Transmission> (EOT)
#define ASCii_ENQ 0x0005 // ENQ <Enquiry> (ENQ)
#define ASCii_ACK 0x0006 // ACK <Acknowledge> (ACK)
#define ASCii_BEL 0x0007 // BEL <Alert> (BEL)
#define ASCii_BS 0x0008 // BS <Backspace> (BS)
#define ASCii_HT 0x0009 // HT <Character Tabulation> (HT, TAB)
#define ASCii_LF 0x000A // LF <End of Line> (EOL, LF, NL)
#define ASCii_VT 0x000B // VT <Line Tabulation> (VT)
#define ASCii_FF 0x000C // FF <Form Feed> (FF)
#define ASCii_CR 0x000D // CR <Carriage Return> (CR)
#define ASCii_SO 0x000E // SO <Locking-Shift One> (SO)
#define ASCii_SI 0x000F // SI <Locking-Shift Zero> (SI)
#define ASCii_DLE 0x0010 // DLE <Data Link Escape> (DLE)
#define ASCii_DC1 0x0011 // DC1 <Device Control One> (DC1)
#define ASCii_DC2 0x0012 // DC2 <Device Control Two> (DC2)
#define ASCii_DC3 0x0013 // DC3 <Device Control Three> (DC3)
#define ASCii_DC4 0x0014 // DC4 <Device Control Four> (DC4)
#define ASCii_NAK 0x0015 // NAK <Negative Acknowledge> (NAK)
#define ASCii_SYN 0x0016 // SYN <Synchronous Idle> (SYN)
#define ASCii_ETB 0x0017 // ETB <End of Transmission Block> (ETB)
#define ASCii_CAN 0x0018 // CAN <Cancel> (CAN)
#define ASCii_EOM 0x0019 // EOM <End of Medium> (EOM)
#define ASCii_SUB 0x001A // SUB <Substitute> (SUB)
#define ASCii_ESC 0x001B // ESC <Escape> (ESC)
#define ASCii_FS 0x001C // FS <File Separator> (FS)
#define ASCii_GS 0x001D // GS <Group Separator> (GS)
#define ASCii_RS 0x001E // RS <Information Separator Two> (RS)
#define ASCii_US 0x001F // US <Information Separator One> (US)
#define ASCii_SP 0x0020 // SP Espace (SP)
#define ASCii_DEL 0x007F // DEL <Delete> (DEL)
// https://www.compart.com/fr/unicode/block/U+2400
// https://symbl.cc/fr/unicode/blocks/control-pictures/
// Pictogrammes pour caractères de commande
#define SYM_CTRL_NUL 0x2400 // ␀ Symbole pour nul
#define SYM_CTRL_STX 0x2401 // ␁ Symbole pour début d'en-tête
#define SYM_CTRL_ETX 0x2402 // ␂ Symbole pour début de texte
#define SYM_CTRL_EOT 0x2403 // ␃ Symbole pour fin de texte
#define SYM_CTRL_ENQ 0x2404 // ␄ Symbole pour fin de transmission
#define SYM_CTRL_ENQ 0x2405 // ␅ Symbole pour demande
#define SYM_CTRL_ACK 0x2406 // ␆ Symbole pour accusé de réception
#define SYM_CTRL_BEL 0x2407 // ␇ Symbole pour sonnerie
#define SYM_CTRL_BS 0x2408 // ␈ Symbole pour espace arrière
#define SYM_CTRL_HT 0x2409 // ␉ Symbole pour tabulation horizontale
#define SYM_CTRL_LF 0x240A // ␊ Symbole pour changement de ligne
#define SYM_CTRL_VT 0x240B // ␋ Symbole pour tabulation verticale
#define SYM_CTRL_FF 0x240C // ␌ Symbole pour saut de page
#define SYM_CTRL_CR 0x240D // ␍ Symbole pour retour de chariot
#define SYM_CTRL_SO 0x240E // ␎ Symbole pour hors code
#define SYM_CTRL_SI 0x240F // ␏ Symbole pour en code
#define SYM_CTRL_DLE 0x2410 // ␐ Symbole pour échappement transmission
#define SYM_CTRL_DC1 0x2411 // ␑ Symbole pour commande de dispositif un
#define SYM_CTRL_DC2 0x2412 // ␒ Symbole pour commande de dispositif deux
#define SYM_CTRL_DC3 0x2413 // ␓ Symbole pour commande de dispositif trois
#define SYM_CTRL_DC4 0x2414 // ␔ Symbole pour commande de dispositif quatre
#define SYM_CTRL_NAK 0x2415 // ␕ Symbole pour accusé de réception négatif
#define SYM_CTRL_SYN 0x2416 // ␖ Symbole pour synchronisation
#define SYM_CTRL_ETB 0x2417 // ␗ Symbole pour fin de bloc de transmission
#define SYM_CTRL_CAN 0x2418 // ␘ Symbole pour annulation
#define SYM_CTRL_EOM 0x2419 // ␙ Symbole pour fin de support
#define SYM_CTRL_SUB 0x241A // ␚ Symbole pour substitution
#define SYM_CTRL_ESC 0x241B // ␛ Symbole pour échappement
#define SYM_CTRL_FS 0x241C // ␜ Symbole pour séparateur de fichiers
#define SYM_CTRL_GS 0x241D // ␝ Symbole pour séparateur de groupes
#define SYM_CTRL_RS 0x241E // ␞ Symbole pour séparateur d'enregistrements
#define SYM_CTRL_US 0x241F // ␟ Symbole pour séparateur d'unités
#define SYM_CTRL_SP 0x2420 // ␠ Symbole pour espace
#define SYM_CTRL_DEL 0x2421 // ␡ Symbole pour suppression
#define SYM_CTRL_LF 0x2424 // ␤ Symbole pour nouvelle ligne
#endif

// https://www.compart.com/fr/unicode/category/So
#define SYB_OMBRE_FAIBLE  0x2591 // ░ Ombre légère
#define SYB_OMBRE_MOYENNE 0x2592 // ▒ Ombre moyenne
#define SYB_OMBRE_FONCEE  0x2593 // ▓ Ombre foncée

#define SYB_HUITIEME_INF           0x2581 // ▁ Huitième inférieur de pavé
#define SYB_QUART_INF              0x2582 // ▂ Quart inférieur de pavé
#define SYB_TROIS_HUITIEMES_INF    0x2583 // ▃ Trois huitièmes inférieurs de pavé
#define SYB_MOITIE_INF             0x2584 // ▄ Moitié inférieure de pavé
#define SYB_CINQ_HUITIEMES_INF     0x2585 // ▅ Cinq huitièmes inférieurs de pavé
#define SYB_TROIS_QUARTS_INF       0x2586 // ▆ Trois quarts inférieurs de pavé
#define SYB_SEPT_HUITIEMES_INF     0x2587 // ▇ Sept huitièmes inférieurs de pavé
#define SYB_PAVE_PLEIN             0x2588 // █ Pavé plein
#define SYB_SEPT_HUITIEMES_GAUCHE  0x2589 // ▉ Sept huitièmes gauches de pavé
#define SYB_TROIS_QUARTS_GAUCHE    0x258A // ▊ Trois quarts gauches de pavé
#define SYB_CINQ_HUITIEMES_GAUCHE  0x258B // ▋ Cinq huitièmes gauches de pavé
#define SYB_MOITIE_GAUCHE          0x258C // ▌ Moitié gauche de pavé
#define SYB_TROIS_HUITIEMES_GAUCHE 0x258D // ▍ Trois huitièmes gauches de pavé
#define SYB_UN_QUART_GAUCHE        0x258E // ▎ Un quart gauche de pavé
#define SYB_UN_HUITIEME_GAUCHE     0x258F // ▏ Un huitième gauche de pavé

#define SYB_MOITIE_DROITE       0x2590 // ▐  Moitié droite de pavé
#define SYB_HUITIEME_SUPERIEUR  0x2594 // ▔ Huitième supérieur de pavé
#define SYB_HUITIEME_DROIT      0x2595 // ▕ Huitième droit de pavé

// ------------------------------------------------------------
// SYMBOLES D'OUTILS ET TECHNOLOGIE
// ------------------------------------------------------------
// Symboles de puissance
#define SYM_RESEAU_SYMBOLE_MARCHE        0x23FB   // ⏻   Symbole marche (IEC 60417)
#define SYM_RESEAU_SYMBOLE_ARRET         0x23FC   // ⏼   Symbole arrêt (IEC 60417)
#define SYM_RESEAU_SYMBOLE_VEILLE        0x23FE   // ⏾   Symbole veille
#define SYM_RESEAU_SYMBOLE_ALIM          0x2B58   // ⭘   Symbole alimentation
#define SYM_RESEAU_LOSANGE_ORANGE        0x1F538  // 🔸  Petit losange orange
#define SYM_RESEAU_LOSANGE_BLEU          0x1F539  // 🔹  Petit losange bleu
#define SYM_RESEAU_SMILEY_ZZZ            0x1F4A4  // 💤  Endormi / veille
#define SYM_RESEAU_SMILEY_FEU            0x1F525  // 🔥  En feu / surcharge
#define SYM_RESEAU_SMILEY_GLACE          0x1F976  // 🥶  Gelé / crash
#define SYM_RESEAU_SMILEY_ROBOT          0x1F916  // 🤖  Robot / automatique
// Réseau / Topologie (utilitaires)
#define SYM_RESEAU_NOEUD                 0x25CF   // ●   Point noir (nœud)
#define SYM_RESEAU_NOEUD_BLANC           0x25CB   // ○   Point blanc (nœud vide)
#define SYM_RESEAU_LIGNE_HORIZ           0x2500   // ─   Ligne horizontale
#define SYM_RESEAU_LIGNE_VERT            0x2502   // │   Ligne verticale
#define SYM_RESEAU_COIN_HAUT_G           0x250C   // ┌   Coin haut-gauche
#define SYM_RESEAU_COIN_HAUT_D           0x2510   // ┐   Coin haut-droit
#define SYM_RESEAU_COIN_BAS_G            0x2514   // └   Coin bas-gauche
#define SYM_RESEAU_COIN_BAS_D            0x2518   // ┘   Coin bas-droit
#define SYM_RESEAU_CROIX_LIGNE           0x253C   // ┼   Croisement
#define SYM_RESEAU_T_HAUT                0x252C   // ┬   T vers le haut
#define SYM_RESEAU_T_BAS                 0x2534   // ┴   T vers le bas
#define SYM_RESEAU_T_GAUCHE              0x251C   // ├   T vers la gauche
#define SYM_RESEAU_T_DROITE              0x2524   // ┤   T vers la droite
#define SYM_RESEAU_DOUBLE_LIGNE_H        0x2550   // ═   Double ligne horizontale
#define SYM_RESEAU_DOUBLE_LIGNE_V        0x2551   // ║   Double ligne verticale

// Symboles de flux / données
#define SYM_RESEAU_FLECHE_DATA_ENTREE    0x21E8   // ⇨   Flèche grasse droite (entrée)
#define SYM_RESEAU_FLECHE_DATA_SORTIE    0x21E6   // ⇦   Flèche grasse gauche (sortie)
#define SYM_RESEAU_FLECHE_DATA_BI        0x21F6   // ⇶   Trois flèches horizontales (bidirectionnel)
#define SYM_RESEAU_FLECHE_DATA_UP        0x21E7   // ⇧   Flèche grasse haut (upload)
#define SYM_RESEAU_FLECHE_DATA_DOWN      0x21E9   // ⇩   Flèche grasse bas (download)

#ifdef SYMBOLES_OUTILS_UTF8
#define SYM_RESEAU_HAUT_PARLEUR          0x1F50A  // 🔊  Haut-parleur
#define SYM_RESEAU_HAUT_PARLEUR_MUET     0x1F507  // 🔇  Haut-parleur muet

// Drapeaux (pour localisation serveur) - séquences régionales sur 2 codepoints
#define SYM_RESEAU_DRAPEAU_FR            0x1F1EB1F1F7  // 🇫🇷  France
#define SYM_RESEAU_DRAPEAU_US            0x1F1FA1F1F8  // 🇺🇸  États-Unis
#define SYM_RESEAU_DRAPEAU_UK            0x1F1EC1F1E7  // 🇬🇧  Royaume-Uni
#define SYM_RESEAU_DRAPEAU_DE            0x1F1E91F1EA  // 🇩🇪  Allemagne
#define SYM_RESEAU_DRAPEAU_ES            0x1F1EA1F1F8  // 🇪🇸  Espagne
#define SYM_RESEAU_DRAPEAU_IT            0x1F1EE1F1F9  // 🇮🇹  Italie
#define SYM_RESEAU_DRAPEAU_JP            0x1F1EF1F1F5  // 🇯🇵  Japon
#define SYM_RESEAU_DRAPEAU_CN            0x1F1E81F1F3  // 🇨🇳  Chine
#define SYM_RESEAU_DRAPEAU_BR            0x1F1E71F1F7  // 🇧🇷  Brésil
#define SYM_RESEAU_DRAPEAU_CA            0x1F1E81F1E6  // 🇨🇦  Canada
#define SYM_RESEAU_DRAPEAU_AU            0x1F1E61F1FA  // 🇦🇺  Australie
#define SYM_RESEAU_DRAPEAU_NL            0x1F1F31F1F1  // 🇳🇱  Pays-Bas
#define SYM_RESEAU_DRAPEAU_SE            0x1F1F81F1EA  // 🇸🇪  Suède
#define SYM_RESEAU_DRAPEAU_CH            0x1F1E81F1ED  // 🇨🇭  Suisse
#define SYM_RESEAU_DRAPEAU_BE            0x1F1E71F1EA  // 🇧🇪  Belgique
#define SYM_RESEAU_DRAPEAU_DK            0x1F1E91F1F0  // 🇩🇰  Danemark
#define SYM_RESEAU_DRAPEAU_NO            0x1F1F31F1F4  // 🇳🇴  Norvège
#define SYM_RESEAU_DRAPEAU_FI            0x1F1EB1F1EE  // 🇫🇮  Finlande
#define SYM_RESEAU_DRAPEAU_AT            0x1F1E61F1F9  // 🇦🇹  Autriche
#define SYM_RESEAU_DRAPEAU_PL            0x1F1F51F1F1  // 🇵🇱  Pologne
#define SYM_RESEAU_DRAPEAU_RU            0x1F1F71F1FA  // 🇷🇺  Russie
#define SYM_RESEAU_DRAPEAU_KR            0x1F1F01F1F7  // 🇰🇷  Corée du Sud
#define SYM_RESEAU_DRAPEAU_IN            0x1F1EE1F1F3  // 🇮🇳  Inde
#define SYM_RESEAU_DRAPEAU_TR            0x1F1F91F1F7  // 🇹🇷  Turquie
#define SYM_RESEAU_DRAPEAU_MX            0x1F1F21F1FD  // 🇲🇽  Mexique
#define SYM_RESEAU_DRAPEAU_AR            0x1F1E61F1F7  // 🇦🇷  Argentine
#define SYM_RESEAU_DRAPEAU_ZA            0x1F1FF1F1E6  // 🇿🇦  Afrique du Sud
#define SYM_RESEAU_DRAPEAU_EU            0x1F1EA1F1FA  // 🇪🇺  Union Européenne
#define SYM_OUTIL_ENGRENAGE    0x2699       // ⚙️ - GEAR
#define SYM_OUTIL_CLEF_PLATE   0x1F527      // 🔧 - WRENCH
#define SYM_OUTIL_OUTILS       0x1F6E0      // 🛠️ - HAMMER AND WRENCH
#define SYM_OUTIL_MARTEAU      0x1F528      // 🔨 - HAMMER
#define SYM_RESEAU_TOURNEVIS   0x1FA9B      // 🪛  Tournevis (Unicode 13)
#define SYM_OUTIL_ESTIME       0x212E       // ℮ Symbole estimé
#define SYM_OUTIL_MARTEAU_PIOCHE 0x2692     // ⚒ Marteau et pioche
#define SYM_OUTIL_LOUPE                 0x1F50D  // 🔍 - LEFT-POINTING MAGNIFYING GLASS
#define SYM_RESEAU_ORDINATEUR_PORTABLE  0x1F4BB  // 💻  Ordinateur portable
#define SYM_RESEAU_ORDI_PORTABLE_OLD    0x1F5B3  // 🖳   Vieil ordinateur portable (non-emoji)
#define SYM_RESEAU_TROIS_ORDINATEURS    0x1F5A7  // 🖧  Trois ordinateurs en réseau
#define SYM_OUTIL_EPROUVETTE  0x1F9EA      // 🧪 - TEST TUBE
#define SYM_OUTIL_PALETTE  0x1F3A8         // 🎨 - ARTIST PALETTE
#define SYM_OUTIL_LIVRE  0x1F4D6           // 📖 - OPEN BOOK
#define SYM_OUTIL_LIVRES  0x1F4DA          // 📚 - BOOKS
#define SYM_OUTIL_FICHIER  0x1F4C4         // 📄 - PAGE FACING UP
#define SYM_OUTIL_DOSSIER  0x1F4C1         // 📁 - FILE FOLDER
#define SYM_OUTIL_DOSSIER_2  0x1F5C2       // 🗂️ - CARD INDEX DIVIDERS
#define SYM_OUTIL_DOSSIER_OUVERT  0x1F4C2  // 📂 - OPEN FILE FOLDER
#define SYM_OUTIL_CERVEAU  0x1F9E0         // 🧠 - BRAIN
#define SYM_OUTIL_BALEINE  0x1F40B         // 🐋 - WHALE
#define SYM_OUTIL_BUG  0x1F41B             // 🐛 - BUG
#define SYM_OUTIL_PARABOLE  0x1F4E1        // 📡 - SATELLITE ANTENNA
#define SYM_OUTIL_MEMO  0x1F4DD            // 📝 - MEMO
#define SYM_OUTIL_AMPOULE  0x1F4A1         // 💡 - LIGHT BULB
// Énergie & Câblage
#define SYM_RESEAU_PRISE_ELECTRIQUE    0x1F50C  // 🔌  Prise électrique / câble
#define SYM_RESEAU_BATTERIE            0x1F50B  // 🔋  Batterie
#define SYM_RESEAU_BATTERIE_PLEINE     0x1FAAB  // 🪫  Batterie faible (Unicode 15)
#define SYM_OUTIL_PAQUET  0x1F4E6          // 📦 - PACKAGE
#define SYM_OUTIL_MAISON  0x1F3E0          // 🏠 - HOUSE BUILDING
#define SYM_OUTIL_NETTOYER  0x1F9F9        // 🧹 - BROOM
#define SYM_OUTIL_RECYCLE  0x267B          // ♻️ - BLACK UNIVERSAL RECYCLING SYMBOL
#define SYM_OUTIL_BOUSSOLE  0x1F9ED        // 🧭 - COMPASS
#define SYM_CAPT_MAGNETIQUE        0x1F9F2  // 🧲 - MAGNET
#define SYM_CAPT_GYROSCOPE         0x1F300  // 🌀 - CYCLONE
#define SYM_CAPT_SATELLITE         0x1F6F0  // 🛰️ - SATELLITE
#endif

// ------------------------------------------------------------
// SYMBOLES NUMÉRIQUES ET CHIFFRES ENTOURÉS
// ------------------------------------------------------------
#ifdef SYMBOLES_NUMERIQUES_UTF8
#define SYM_NUM_0  0x0030                  // 0 - DIGIT ZERO
#define SYM_NUM_1  0x0031                  // 1 - DIGIT ONE
#define SYM_NUM_2  0x0032                  // 2 - DIGIT TWO
#define SYM_NUM_3  0x0033                  // 3 - DIGIT THREE
#define SYM_NUM_4  0x0034                  // 4 - DIGIT FOUR
#define SYM_NUM_5  0x0035                  // 5 - DIGIT FIVE
#define SYM_NUM_6  0x0036                  // 6 - DIGIT SIX
#define SYM_NUM_7  0x0037                  // 7 - DIGIT SEVEN
#define SYM_NUM_8  0x0038                  // 8 - DIGIT EIGHT
#define SYM_NUM_9  0x0039                  // 9 - DIGIT NINE
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
// FONCTIONS UTILITAIRES AVANCÉES
// =============================================
/**
 * Crée une chaîne avec exposant
 */
String avecExposant(const String& base, const String& exposant) {
  #ifdef SYMBOLES_MATHS_UTF8
  String result = base;
  result += getSymboleUTF8(SYM_EXPOSANT_PAREN_G);
  for (size_t i = 0; i < exposant.length(); i++) {
    char c = exposant[i];
    switch(c) {
      case '0': result += getSymboleUTF8(SYM_EXPOSANT_0); break;
      case '1': result += getSymboleUTF8(SYM_EXPOSANT_1); break;
      case '2': result += getSymboleUTF8(SYM_EXPOSANT_2); break;
      case '3': result += getSymboleUTF8(SYM_EXPOSANT_3); break;
      case '4': result += getSymboleUTF8(SYM_EXPOSANT_4); break;
      case '5': result += getSymboleUTF8(SYM_EXPOSANT_5); break;
      case '6': result += getSymboleUTF8(SYM_EXPOSANT_6); break;
      case '7': result += getSymboleUTF8(SYM_EXPOSANT_7); break;
      case '8': result += getSymboleUTF8(SYM_EXPOSANT_8); break;
      case '9': result += getSymboleUTF8(SYM_EXPOSANT_9); break;
      case '+': result += getSymboleUTF8(SYM_EXPOSANT_PLUS); break;
      case '-': result += getSymboleUTF8(SYM_EXPOSANT_MOINS); break;
      case '=': result += getSymboleUTF8(SYM_EXPOSANT_EGAL); break;
      case '(': result += getSymboleUTF8(SYM_EXPOSANT_PAREN_G); break;
      case ')': result += getSymboleUTF8(SYM_EXPOSANT_PAREN_D); break;
      default: result += c;
    }
  }
  result += getSymboleUTF8(SYM_EXPOSANT_PAREN_D);
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
  result += getSymboleUTF8(SYM_INDICE_PAREN_G);
  for (size_t i = 0; i < indice.length(); i++) {
    char c = indice[i];
    switch(c) {
      case '0': result += getSymboleUTF8(SYM_INDICE_0); break;
      case '1': result += getSymboleUTF8(SYM_INDICE_1); break;
      case '2': result += getSymboleUTF8(SYM_INDICE_2); break;
      case '3': result += getSymboleUTF8(SYM_INDICE_3); break;
      case '4': result += getSymboleUTF8(SYM_INDICE_4); break;
      case '5': result += getSymboleUTF8(SYM_INDICE_5); break;
      case '6': result += getSymboleUTF8(SYM_INDICE_6); break;
      case '7': result += getSymboleUTF8(SYM_INDICE_7); break;
      case '8': result += getSymboleUTF8(SYM_INDICE_8); break;
      case '9': result += getSymboleUTF8(SYM_INDICE_9); break;
      case '+': result += getSymboleUTF8(SYM_INDICE_PLUS); break;
      case '-': result += getSymboleUTF8(SYM_INDICE_MOINS); break;
      case '=': result += getSymboleUTF8(SYM_INDICE_EGAL); break;
      case '(': result += getSymboleUTF8(SYM_INDICE_PAREN_G); break;
      case ')': result += getSymboleUTF8(SYM_INDICE_PAREN_D); break;
      default: result += c;
    }
  }
  result += getSymboleUTF8(SYM_INDICE_PAREN_D);
  return result;
  #else
  return base + "_" + indice;
  #endif
}

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
 * Affiche une valeur de résistance avec unité (µ, Ω, kΩ, MΩ)
 */
String resistanceAvecUnite(float ohms) {
  String result;
  if (ohms >= 1e6) {
    result = String(ohms / 1e6, 2);
    result += " M";
    result += getSymboleUTF8(SYM_OMEGA_MAJ);
  } else if (ohms >= 1e3) {
    result = String(ohms / 1e3, 2);
    result += " k";
    result += getSymboleUTF8(SYM_OMEGA_MAJ);
  } else if (ohms >= 1) {
    result = String(ohms, 2);
    result += " ";
    result += getSymboleUTF8(SYM_OMEGA_MAJ);
  } else if (ohms >= 1e-3) {
    result = String(ohms * 1e3, 2);
    result += " m";
    result += getSymboleUTF8(SYM_OMEGA_MAJ);
  } else {
    result = String(ohms * 1e6, 2);
    result += " µ";
    result += getSymboleUTF8(SYM_OMEGA_MAJ);
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
  } else if (farads >= 1e-3) {
    result = String(farads * 1e3, 3);
    result += " mF";
  } else if (farads >= 1e-6) {
    result = String(farads * 1e6, 3);
    result += " ";
    result += getSymboleUTF8(SYM_MICRO);
    result += "F";
  } else if (farads >= 1e-9) {
    result = String(farads * 1e9, 3);
    result += " nF";
  } else {
    result = String(farads * 1e12, 3);
    result += " pF";
  }
  return result;
}

/**
 * Affiche une valeur de tension avec unité (kV, V, mV, µV)
 */
String tensionAvecUnite(float volts) {
  String result;
  if (volts >= 1e3) {
    result = String(volts * 1e-3, 3);
    result += " kV";
  } else if (volts >= 1) {
    result = String(volts, 3);
    result += " V";
  } else if (volts >= 1e-3) {
    result = String(volts * 1e3, 3);
    result += " mV";
  } else {
    result = String(volts * 1e6, 3);
    result += " ";
    result += getSymboleUTF8(SYM_MICRO);
    result += "V";
  }
  return result;
}

/**
 * Affiche une valeur de courant avec unité (A, mA, µA, nA)
 */
String courantAvecUnite(float amperes) {
  String result;
  if (amperes >= 1) {
    result = String(amperes, 3);
    result += " A";
  } else if (amperes >= 1e-3) {
    result = String(amperes * 1e3, 3);
    result += " mA";
  } else if (amperes >= 1e-6) {
    result = String(amperes * 1e6, 3);
    result += " ";
    result += getSymboleUTF8(SYM_MICRO);
    result += "A";
  } else {
    result = String(amperes * 1e9, 3);
    result += " nA";
  }
  return result;
}

/**
 * Affiche la force du signal WiFi avec barres
 */
String wifiStrength(int rssi) {
  String result = getSymboleUTF8(SYM_WIFI);
  if (rssi > -40) {
    result += "█████";
  } else if (rssi > -50) {
    result += "████░";
  } else if (rssi > -60) {
    result += "███░░";
  } else if (rssi > -70) {
    result += "██░░░";
  } else if (rssi > -80) {
    result += "█░░░░";
  } else {
    result += "░░░░░";
  }
  return result;
}

/**
 * Affiche un pourcentage avec barre de progression
 */
String barrePourcentage(int pourcentage, int largeur = 10) {
  String result = "[";
  int filled = (pourcentage * largeur) / 100;
  for (int i = 0; i < largeur; i++) {
    if (i < filled) {
      result += "█";
    } else {
      result += "░";
    }
  }
  result += "] " + String(pourcentage) + "%";
  return result;
}

#define LARGEUR_BARRE 10

/**
 * Affiche un pourcentage avec barre de progression fine (1/8 caractère)
 * valeur de 0 à 100
 */
String barrePourcentageDetaille(int pourcentage) {
  String result = "[";
  
  // Clamp entre 0 et 100
  if (pourcentage < 0) pourcentage = 0;
  if (pourcentage > 100) pourcentage = 100;
  
  int filled = pourcentage / 10;           // blocs pleins (0 à 10)
  int remainder = pourcentage % 10;        // reste 0-9 (représente 0% à 9% du bloc suivant)
  int partial = (remainder * 8 + 5) / 10;   // conversion en 1/8ème avec arrondi (0 à 7)
  
  // ─── Blocs pleins ───
  for (int i = 0; i < filled; i++) {
    result += getSymboleUTF8(SYB_PAVE_PLEIN);  // █
  }
  
  // ─── Symbole partiel (sauf si barre complète) ───
  if (filled < LARGEUR_BARRE) {
    switch (partial) {
      case 7: result += getSymboleUTF8(SYB_SEPT_HUITIEMES_GAUCHE); break;  // 0x2589 ▉ Sept huitièmes gauches de pavé
      case 6: result += getSymboleUTF8(SYB_TROIS_QUARTS_GAUCHE); break;    // 0x258A ▊ Trois quarts gauches de pavé
      case 5: result += getSymboleUTF8(SYB_CINQ_HUITIEMES_GAUCHE); break;  // 0x258B ▋ Cinq huitièmes gauches de pavé
      case 4: result += getSymboleUTF8(SYB_MOITIE_GAUCHE); break;          // 0x258C ▌ Moitié gauche de pavé
      case 3: result += getSymboleUTF8(SYB_TROIS_HUITIEMES_GAUCHE); break; // 0x258D ▍ Trois huitièmes gauches de pavé
      case 2: result += getSymboleUTF8(SYB_UN_QUART_GAUCHE); break;        // 0x258E ▎ Un quart gauche de pavé
      case 1: result += getSymboleUTF8(SYB_UN_HUITIEME_GAUCHE); break;     // 0x258F ▏ Un huitième gauche de pavé
      case 0: result += " "; break;                                          // espace
      default: result += " "; break;
    }
  }
  
  // ─── Espaces vides pour compléter la largeur ───
  int totalRendu = filled + (filled < LARGEUR_BARRE ? 1 : 0);
  for (int i = totalRendu; i < LARGEUR_BARRE; i++) {
    result += " ";
  }
  
  result += "] " + String(pourcentage) + "%";
  return result;
}

/**
 * Formate un débit réseau (bps, Kbps, Mbps, Gbps)
 */
String debitAvecUnite(float bitsPerSecond) {
  String result;
  if (bitsPerSecond >= 1e9) {
    result = String(bitsPerSecond / 1e9, 2);
    result += " Gbps";
  } else if (bitsPerSecond >= 1e6) {
    result = String(bitsPerSecond / 1e6, 2);
    result += " Mbps";
  } else if (bitsPerSecond >= 1e3) {
    result = String(bitsPerSecond / 1e3, 2);
    result += " Kbps";
  } else {
    result = String(bitsPerSecond, 2);
    result += " bps";
  }
  return result;
}

/**
 * Formate une taille de données (B, KB, MB, GB, TB)
 */
String tailleAvecUnite(float bytes) {
  String result;
  if (bytes >= 1099511627776LL) {
    result = String(bytes / 1099511627776LL, 2);
    result += " TB";
  } else if (bytes >= 1073741824) {
    result = String(bytes / 1073741824, 2);
    result += " GB";
  } else if (bytes >= 1048576) {
    result = String(bytes / 1048576, 2);
    result += " MB";
  } else if (bytes >= 1024) {
    result = String(bytes / 1024, 2);
    result += " KB";
  } else {
    result = String(bytes, 2);
    result += " B";
  }
  return result;
}

/**
 * Affiche l'état d'une connexion réseau
 */
String etatConnexion(bool connecte, const String& ssid = "") {
  if (connecte) {
    String result = getSymboleUTF8(SYM_ETAT_OK);
    result += " Connecté";
    if (ssid.length() > 0) {
      result += " à ";
      result += ssid;
    }
    return result;
  } else {
    return getSymboleUTF8(SYM_ETAT_ERREUR) + " Déconnecté";
  }
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
#define SYM_FRAC_1_2() getSymboleUTF8(SYM_FRACTION_1_2)
#define SYM_FRAC_1_4() getSymboleUTF8(SYM_FRACTION_1_4)
#define SYM_FRAC_3_4() getSymboleUTF8(SYM_FRACTION_3_4)
#define SYM_FRAC_1_3() getSymboleUTF8(SYM_FRACTION_1_3)
#define SYM_FRAC_2_3() getSymboleUTF8(SYM_FRACTION_2_3)
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

#define SYM_WIFI()      getSymboleUTF8(SYM_WIFI)
#define SYM_BLUETOOTH() getSymboleUTF8(SYM_BLUETOOTH)
#define SYM_CLOUD()     getSymboleUTF8(SYM_CLOUD)
#define SYM_DOWNLOAD()  getSymboleUTF8(SYM_DOWNLOAD)
#define SYM_UPLOAD()    getSymboleUTF8(SYM_UPLOAD)
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
