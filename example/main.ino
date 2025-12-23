// main.cpp
// Programme de test complet ESP8266 de la bibliothèque Symboles
// Affiche tous les symboles disponibles via Serial ET serveur web
// Version corrigée pour les nouveaux codes Unicode
// ===========================================================

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// =============================================
// CONFIGURATION WIFI
// =============================================
#include "connexions.h"
#include "symboles.h"

// =============================================
// SERVEUR WEB
// =============================================
ESP8266WebServer server(80);

// =============================================
// VARIABLES GLOBALES
// =============================================
String pageWeb = "";
unsigned long dernierAffichage = 0;
const unsigned long intervalleAffichage = 10000; // 10 secondes

// =============================================
// DÉCLARATIONS DES FONCTIONS
// =============================================
void connecterWifi();
void configurerServeurWeb();
void afficherTousSymbolesSerial();
void genererPageWeb();
void handleRoot();
void handleSymboles();
void handleTestFonctions();
void handle404();

// Tableaux de codes pour chaque catégorie
#ifdef SYMBOLES_MATHS_UTF8
const unsigned int symbolesMaths[] = {
  SYM_MATHS_FRACTION_1_2, SYM_MATHS_FRACTION_1_4, SYM_MATHS_FRACTION_3_4,
  SYM_MATHS_FRACTION_1_3, SYM_MATHS_FRACTION_2_3, SYM_MATHS_FRACTION_1_5,
  SYM_MATHS_FRACTION_2_5, SYM_MATHS_FRACTION_3_5, SYM_MATHS_FRACTION_4_5,
  SYM_MATHS_FRACTION_1_6, SYM_MATHS_FRACTION_5_6, SYM_MATHS_FRACTION_1_8,
  SYM_MATHS_FRACTION_3_8, SYM_MATHS_FRACTION_5_8, SYM_MATHS_FRACTION_7_8,
  SYM_MATHS_EXPOSANT_0, SYM_MATHS_EXPOSANT_1, SYM_MATHS_EXPOSANT_2,
  SYM_MATHS_EXPOSANT_3, SYM_MATHS_EXPOSANT_4, SYM_MATHS_EXPOSANT_5,
  SYM_MATHS_EXPOSANT_6, SYM_MATHS_EXPOSANT_7, SYM_MATHS_EXPOSANT_8,
  SYM_MATHS_EXPOSANT_9, SYM_MATHS_EXPOSANT_PLUS, SYM_MATHS_EXPOSANT_MOINS,
  SYM_MATHS_EXPOSANT_EGAL, SYM_MATHS_EXPOSANT_PAREN_G, SYM_MATHS_EXPOSANT_PAREN_D,
  SYM_MATHS_INDICE_0, SYM_MATHS_INDICE_1, SYM_MATHS_INDICE_2,
  SYM_MATHS_INDICE_3, SYM_MATHS_INDICE_4, SYM_MATHS_INDICE_5,
  SYM_MATHS_INDICE_6, SYM_MATHS_INDICE_7, SYM_MATHS_INDICE_8,
  SYM_MATHS_INDICE_9, SYM_MATHS_INDICE_PLUS, SYM_MATHS_INDICE_MOINS,
  SYM_MATHS_INDICE_EGAL, SYM_MATHS_INDICE_PAREN_G, SYM_MATHS_INDICE_PAREN_D,
  SYM_MATHS_PARALLELE, SYM_MATHS_PERPENDICULAIRE, SYM_MATHS_ANGLE,
  SYM_MATHS_APPARTIENT, SYM_MATHS_N_APPARTIENT_PAS, SYM_MATHS_INCLUS,
  SYM_MATHS_N_INCLUS_PAS, SYM_MATHS_UNION, SYM_MATHS_INTERSECTION,
  SYM_MATHS_VIDE, SYM_MATHS_ALEPH, SYM_MATHS_HBAR,
  SYM_MATHS_TAU_, SYM_MATHS_PHI, SYM_MATHS_THETA,
  SYM_MATHS_OMEGA, SYM_MATHS_NABLA, SYM_MATHS_PARTIAL,
  SYM_MATHS_PRODUIT, SYM_MATHS_PRIME, SYM_MATHS_DOUBLE_PRIME,
  SYM_MATHS_ALPHA, SYM_MATHS_BETA, SYM_MATHS_GAMMA,
  SYM_MATHS_DELTA, SYM_MATHS_EPSILON, SYM_MATHS_ZETA,
  SYM_MATHS_ETA, SYM_MATHS_IOTA, SYM_MATHS_KAPPA,
  SYM_MATHS_LAMBDA, SYM_MATHS_MU, SYM_MATHS_NU,
  SYM_MATHS_XI, SYM_MATHS_OMICRON, SYM_MATHS_RHO,
  SYM_MATHS_SIGMA, SYM_MATHS_SIGMA_MAJ, SYM_MATHS_TAU,
  SYM_MATHS_UPSILON, SYM_MATHS_CHI, SYM_MATHS_PSI,
  SYM_MATHS_OMEGA_MAJ, SYM_MATHS_ALPHA_MAJ, SYM_MATHS_BETA_MAJ,
  SYM_MATHS_GAMMA_MAJ, SYM_MATHS_DELTA_MAJ, SYM_MATHS_EPSILON_MAJ,
  SYM_MATHS_ZETA_MAJ, SYM_MATHS_ETA_MAJ, SYM_MATHS_THETA_MAJ,
  SYM_MATHS_IOTA_MAJ, SYM_MATHS_KAPPA_MAJ, SYM_MATHS_LAMBDA_MAJ,
  SYM_MATHS_MU_MAJ, SYM_MATHS_NU_MAJ, SYM_MATHS_XI_MAJ,
  SYM_MATHS_OMICRON_MAJ, SYM_MATHS_PI_MAJ, SYM_MATHS_RHO_MAJ,
  SYM_MATHS_UPSILON_MAJ, SYM_MATHS_PHI_MAJ, SYM_MATHS_CHI_MAJ,
  SYM_MATHS_PSI_MAJ, SYM_MATHS_EQUIVALENT, SYM_MATHS_PROCHAIN,
  SYM_MATHS_BICONDITIONNEL, SYM_MATHS_POUR_TOUT, SYM_MATHS_IL_EXISTE,
  SYM_MATHS_NON, SYM_MATHS_ET, SYM_MATHS_OU,
  SYM_MATHS_DIFFERENT, SYM_MATHS_PROPORTIONNEL, SYM_MATHS_DIAMANT,
  SYM_MATHS_CERCLE_PLUS, SYM_MATHS_CERCLE_MOINS, SYM_MATHS_CERCLE_TIMES,
  SYM_MATHS_CERCLE_DIVIDE
};
#endif

#ifdef SYMBOLES_ELECTRIQUE_UTF8
const unsigned int symbolesElectrique[] = {
  SYM_ELEC_RESISTANCE, SYM_ELEC_CAPACITE, SYM_ELEC_INDUCTANCE,
  SYM_ELEC_DIODE, SYM_ELEC_DIODE_ZENER, SYM_ELEC_TRANSISTOR_NPN,
  SYM_ELEC_TRANSISTOR_PNP, SYM_ELEC_SOURCE_TENSION, SYM_ELEC_SOURCE_COURANT,
  SYM_ELEC_PILE, SYM_ELEC_ACCU, SYM_ELEC_FUSIBLE,
  SYM_ELEC_INTERRUPTEUR, SYM_ELEC_INTER_OUVERT, SYM_ELEC_INTER_FERME,
  SYM_ELEC_RELAIS, SYM_ELEC_MOTEUR, SYM_ELEC_GENERATEUR,
  SYM_ELEC_TRANSFORMATEUR, SYM_ELEC_ANTENNE, SYM_ELEC_MASSE,
  SYM_ELEC_MASSE_2, SYM_ELEC_PLUS, SYM_ELEC_MOINS,
  SYM_ELEC_ALTERNATIF, SYM_ELEC_CONTINU, SYM_ELEC_PHASE,
  SYM_ELEC_NEUTRE, SYM_ELEC_TERRE, SYM_ELEC_CAPACITE_VAR,
  SYM_ELEC_RESISTANCE_VAR, SYM_ELEC_ECLAIR, SYM_ELEC_PORTE_AND,
  SYM_ELEC_PORTE_OR, SYM_ELEC_PORTE_NOT, SYM_ELEC_PORTE_NAND,
  SYM_ELEC_PORTE_NOR, SYM_ELEC_PORTE_XOR, SYM_ELEC_PORTE_XNOR,
  SYM_ELEC_FLIP_FLOP, SYM_ELEC_COMPTEUR, SYM_ELEC_REGISTRE,
  SYM_ELEC_MEMOIRE, SYM_ELEC_PROCESSOR, SYM_ELEC_ADC,
  SYM_ELEC_DAC, SYM_ELEC_CAPTEUR_TEMP, SYM_ELEC_PHOTODIODE,
  SYM_ELEC_PIEZO, SYM_ELEC_LED, SYM_ELEC_LASER,
  SYM_ELEC_IOT
};
#endif

#ifdef SYMBOLES_FLECHES_UTF8
const unsigned int symbolesFleches[] = {
  SYM_FLECHE_HAUT, SYM_FLECHE_BAS, SYM_FLECHE_GAUCHE,
  SYM_FLECHE_DROITE, SYM_FLECHE_HAUT_DROITE, SYM_FLECHE_HAUT_GAUCHE,
  SYM_FLECHE_BAS_DROITE, SYM_FLECHE_BAS_GAUCHE, SYM_FLECHE_DOUBLE_HAUT,
  SYM_FLECHE_DOUBLE_BAS, SYM_FLECHE_DOUBLE_GAUCHE, SYM_FLECHE_DOUBLE_DROITE,
  SYM_FLECHE_CURVE_GAUCHE, SYM_FLECHE_CURVE_DROITE, SYM_FLECHE_RETOUR,
  SYM_FLECHE_REDEMARRER, SYM_FLECHE_DROITE_CERCLE, SYM_FLECHE_GAUCHE_CERCLE,
  SYM_FLECHE_UP_DOWN, SYM_FLECHE_LEFT_RIGHT, SYM_FLECHE_NORD,
  SYM_FLECHE_SUD, SYM_FLECHE_EST, SYM_FLECHE_OUEST,
  SYM_FLECHE_DROITE_EPAI, SYM_FLECHE_BAS_EPAI, SYM_TRIANGLE_HAUT,
  SYM_TRIANGLE_BAS
};
#endif

#ifdef SYMBOLES_METEO_UTF8
const unsigned int symbolesMeteo[] = {
  SYM_METEO_SOLEIL, SYM_METEO_NUAGE_SOLEIL, SYM_METEO_NUAGE,
  SYM_METEO_NUAGE_PLUVIEUX, SYM_METEO_PLUIE, SYM_METEO_ORAGE,
  SYM_METEO_NEIGE, SYM_METEO_BROUILLARD, SYM_METEO_VENT,
  SYM_METEO_ARC_EN_CIEL, SYM_METEO_LUNE, SYM_METEO_ECLIPSE,
  SYM_METEO_THERMOMETRE, SYM_METEO_HYGROMETRE, SYM_METEO_BAROMETRE,
  SYM_METEO_ANEMOMETRE, SYM_METEO_GIRQUETTE, SYM_METEO_UV,
  SYM_METEO_HUMIDITE, SYM_METEO_PRESSION, SYM_METEO_TEMPERATURE,
  SYM_METEO_VISIBILITE, SYM_METEO_SUNRISE, SYM_METEO_SUNSET,
  SYM_METEO_ALERTE, SYM_METEO_TORNADE, SYM_METEO_INONDATION,
  SYM_METEO_SOLEIL_VISAGE, SYM_METEO_FLOCON, SYM_METEO_PLANETE
};
#endif

// =============================================
// SETUP (Exécuté une fois au démarrage)
// =============================================
void setup() {
  // Initialiser la communication série
  Serial.begin(115200);
  Serial.println(F("\n\n=========================================="));
  Serial.println(F("TEST ESP8266 - BIBLIOTHÈQUE SYMBOLES"));
  Serial.println(F("==========================================\n"));
  
  // Connexion WiFi
  connecterWifi();
  
  // Configurer le serveur web
  configurerServeurWeb();
  
  // Afficher tous les symboles via Serial (une fois)
  afficherTousSymbolesSerial();
  
  // Générer la page web initiale
  genererPageWeb();
  
  Serial.println(F("\nServeur web démarré !"));
  Serial.print(F("Adresse IP : "));
  Serial.println(WiFi.localIP());
}

// =============================================
// LOOP (Exécuté en boucle)
// =============================================
void loop() {
  server.handleClient();
  
  // Afficher périodiquement un message de test
  unsigned long maintenant = millis();
  if (maintenant - dernierAffichage >= intervalleAffichage) {
    dernierAffichage = maintenant;
    
    // Test de quelques fonctions utilitaires
    Serial.println(F("\n--- Test périodique des fonctions ---"));
    
    // Test avec exposant
    String testExposant = avecExposant("x", "2+y");
    Serial.print(F("avecExposant(\"x\", \"2+y\") = "));
    Serial.println(testExposant);
    
    // Test avec indice
    String testIndice = avecIndice("CO", "2");
    Serial.print(F("avecIndice(\"CO\", \"2\") = "));
    Serial.println(testIndice);
    
    // Test valeurs avec unités
    Serial.print(F("resistanceAvecUnite(1500) = "));
    Serial.println(resistanceAvecUnite(1500));
    
    Serial.print(F("capaciteAvecUnite(0.000047) = "));
    Serial.println(capaciteAvecUnite(0.000047));
    
    Serial.print(F("tensionAvecUnite(0.0033) = "));
    Serial.println(tensionAvecUnite(0.0033));
    
    Serial.print(F("courantAvecUnite(0.00015) = "));
    Serial.println(courantAvecUnite(0.00015));
  }
}

// =============================================
// FONCTIONS WIFI
// =============================================

void connecterWifi() {
  Serial.print(F("Connexion à "));
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(F("."));
  }
  
  Serial.println(F("\nWiFi connecté !"));
  Serial.print(F("Adresse IP: "));
  Serial.println(WiFi.localIP());
}

// =============================================
// FONCTIONS SERVEUR WEB
// =============================================

void configurerServeurWeb() {
  // Routes
  server.on("/", handleRoot);
  server.on("/symboles", handleSymboles);
  server.on("/test", handleTestFonctions);
  server.onNotFound(handle404);
  
  // Démarrer le serveur
  server.begin();
  Serial.println(F("Serveur HTTP démarré"));
}

void handleRoot() {
  genererPageWeb();
  server.send(200, "text/html; charset=utf-8", pageWeb);
}

void handleSymboles() {
  String page = "<!DOCTYPE html><html><head><meta charset='UTF-8'>";
  page += "<title>Tous les Symboles</title>";
  page += "<style>body{font-family:Arial;margin:20px;background:#f5f5f5;}";
  page += ".symbole{display:inline-block;padding:10px;margin:5px;background:white;border:1px solid #ddd;border-radius:5px;font-size:24px;text-align:center;min-width:60px;}";
  page += ".section{margin:30px 0;padding:15px;background:#fff;border-radius:8px;box-shadow:0 2px 5px rgba(0,0,0,0.1);}";
  page += "h2{color:#333;border-bottom:2px solid #4CAF50;padding-bottom:10px;}</style></head><body>";
  page += "<h1>📚 Tous les Symboles UTF-8</h1>";
  page += "<a href='/'>← Retour</a><hr>";
  
  // Afficher les symboles par catégories
  page += "<div class='section'><h2>🔤 Symboles de Base</h2>";
  page += "<span class='symbole' title='Code: " + String(SYM_DEGRE) + "'>" + getSymboleUTF8(SYM_DEGRE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_MICRO) + "'>" + getSymboleUTF8(SYM_MICRO) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_PLUS_MINUS) + "'>" + getSymboleUTF8(SYM_PLUS_MINUS) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_SUPERIEUR_EGAL) + "'>" + getSymboleUTF8(SYM_SUPERIEUR_EGAL) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_INFERIEUR_EGAL) + "'>" + getSymboleUTF8(SYM_INFERIEUR_EGAL) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_EGAL_APPROX) + "'>" + getSymboleUTF8(SYM_EGAL_APPROX) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_RACINE_CARREE) + "'>" + getSymboleUTF8(SYM_RACINE_CARREE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_PUISSANCE_2) + "'>" + getSymboleUTF8(SYM_PUISSANCE_2) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_PUISSANCE_3) + "'>" + getSymboleUTF8(SYM_PUISSANCE_3) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_PUISSANCE_1) + "'>" + getSymboleUTF8(SYM_PUISSANCE_1) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_DIVISION) + "'>" + getSymboleUTF8(SYM_DIVISION) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_MULTIPLICATION) + "'>" + getSymboleUTF8(SYM_MULTIPLICATION) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_INFINI) + "'>" + getSymboleUTF8(SYM_INFINI) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_INTEGRALE) + "'>" + getSymboleUTF8(SYM_INTEGRALE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_SOMME) + "'>" + getSymboleUTF8(SYM_SOMME) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_PI) + "'>" + getSymboleUTF8(SYM_PI) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_POUR_MILLE) + "'>" + getSymboleUTF8(SYM_POUR_MILLE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_BULLET) + "'>" + getSymboleUTF8(SYM_BULLET) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_POINT_MILIEU) + "'>" + getSymboleUTF8(SYM_POINT_MILIEU) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_POINTS_SUSPENSION) + "'>" + getSymboleUTF8(SYM_POINTS_SUSPENSION) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_E_ACCENT_AIGU) + "'>" + getSymboleUTF8(SYM_E_ACCENT_AIGU) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_E_ACCENT_GRAVE) + "'>" + getSymboleUTF8(SYM_E_ACCENT_GRAVE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_E_CIRCONFLEXE) + "'>" + getSymboleUTF8(SYM_E_CIRCONFLEXE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_A_GRAVE) + "'>" + getSymboleUTF8(SYM_A_GRAVE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_A_CIRCONFLEXE) + "'>" + getSymboleUTF8(SYM_A_CIRCONFLEXE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_C_CEDILLE) + "'>" + getSymboleUTF8(SYM_C_CEDILLE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_U_GRAVE) + "'>" + getSymboleUTF8(SYM_U_GRAVE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_U_CIRCONFLEXE) + "'>" + getSymboleUTF8(SYM_U_CIRCONFLEXE) + "</span>";
  page += "<span class='symbole' title='Code: " + String(SYM_O_CIRCONFLEXE) + "'>" + getSymboleUTF8(SYM_O_CIRCONFLEXE) + "</span>";
  page += "</div>";
  
  #ifdef SYMBOLES_MATHS_UTF8
  page += "<div class='section'><h2>🧮 Symboles Mathématiques</h2>";
  for (size_t i = 0; i < sizeof(symbolesMaths)/sizeof(symbolesMaths[0]); i++) {
    page += "<span class='symbole' title='Code: " + String(symbolesMaths[i]) + "'>" + getSymboleUTF8(symbolesMaths[i]) + "</span>";
  }
  page += "</div>";
  #endif
  
  #ifdef SYMBOLES_ELECTRIQUE_UTF8
  page += "<div class='section'><h2>⚡ Symboles Électriques</h2>";
  for (size_t i = 0; i < sizeof(symbolesElectrique)/sizeof(symbolesElectrique[0]); i++) {
    page += "<span class='symbole' title='Code: " + String(symbolesElectrique[i]) + "'>" + getSymboleUTF8(symbolesElectrique[i]) + "</span>";
  }
  page += "</div>";
  #endif
  
  #ifdef SYMBOLES_FLECHES_UTF8
  page += "<div class='section'><h2>↕️ Flèches</h2>";
  for (size_t i = 0; i < sizeof(symbolesFleches)/sizeof(symbolesFleches[0]); i++) {
    page += "<span class='symbole' title='Code: " + String(symbolesFleches[i]) + "'>" + getSymboleUTF8(symbolesFleches[i]) + "</span>";
  }
  page += "</div>";
  #endif
  
  #ifdef SYMBOLES_METEO_UTF8
  page += "<div class='section'><h2>🌤️ Météo</h2>";
  for (size_t i = 0; i < sizeof(symbolesMeteo)/sizeof(symbolesMeteo[0]); i++) {
    page += "<span class='symbole' title='Code: " + String(symbolesMeteo[i]) + "'>" + getSymboleUTF8(symbolesMeteo[i]) + "</span>";
  }
  page += "</div>";
  #endif
  
  page += "</body></html>";
  server.send(200, "text/html; charset=utf-8", page);
}

void handleTestFonctions() {
  String page = "<!DOCTYPE html><html><head><meta charset='UTF-8'>";
  page += "<title>Test des Fonctions</title>";
  page += "<style>body{font-family:Arial;margin:20px;} code{background:#f0f0f0;padding:2px 5px;border-radius:3px;}</style></head><body>";
  page += "<h1>🧪 Test des Fonctions Utilitaires</h1>";
  page += "<a href='/'>← Retour</a><hr>";
  
  page += "<h2>Fonctions de formatage :</h2>";
  
  // Test avec exposant
  String testExposant = avecExposant("x", "2+y");
  page += "<p><code>avecExposant(\"x\", \"2+y\")</code> = " + testExposant + "</p>";
  
  // Test avec indice
  String testIndice = avecIndice("CO", "2");
  page += "<p><code>avecIndice(\"CO\", \"2\")</code> = " + testIndice + "</p>";
  
  // Test valeurs avec unités
  page += "<p><code>resistanceAvecUnite(1500)</code> = " + resistanceAvecUnite(1500) + "</p>";
  page += "<p><code>resistanceAvecUnite(2200000)</code> = " + resistanceAvecUnite(2200000) + "</p>";
  
  page += "<p><code>capaciteAvecUnite(0.000047)</code> = " + capaciteAvecUnite(0.000047) + "</p>";
  page += "<p><code>capaciteAvecUnite(0.000000001)</code> = " + capaciteAvecUnite(0.000000001) + "</p>";
  
  page += "<p><code>tensionAvecUnite(12.5)</code> = " + tensionAvecUnite(12.5) + "</p>";
  page += "<p><code>tensionAvecUnite(0.0033)</code> = " + tensionAvecUnite(0.0033) + "</p>";
  
  page += "<p><code>courantAvecUnite(2.5)</code> = " + courantAvecUnite(2.5) + "</p>";
  page += "<p><code>courantAvecUnite(0.00015)</code> = " + courantAvecUnite(0.00015) + "</p>";
  
  // Test badge numérique
  page += "<h2>Badges numériques :</h2>";
  for (int i = 0; i <= 12; i++) {
    page += "<span style='font-size:24px; margin:5px;'>" + badgeNumerique(i) + "</span>";
  }
  
  page += "<h2>Exemples de circuit :</h2>";
  page += "<pre style='background:#f8f8f8;padding:15px;border-radius:5px;font-family:monospace;'>";
  page += circuitSimple("R=100Ω", "LED");
  page += "</pre>";
  
  page += "</body></html>";
  server.send(200, "text/html; charset=utf-8", page);
}

void handle404() {
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET) ? "GET" : "POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i = 0; i < server.args(); i++) {
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void genererPageWeb() {
  pageWeb = "<!DOCTYPE html><html><head><meta charset='UTF-8'>";
  pageWeb += "<meta name='viewport' content='width=device-width, initial-scale=1.0'>";
  pageWeb += "<title>Bibliothèque Symboles ESP8266</title>";
  pageWeb += "<style>";
  pageWeb += "body{font-family:'Segoe UI',Arial,sans-serif;margin:0;padding:20px;background:linear-gradient(135deg,#667eea 0%,#764ba2 100%);min-height:100vh;color:#333;}";
  pageWeb += ".container{max-width:1200px;margin:0 auto;background:white;padding:30px;border-radius:15px;box-shadow:0 10px 30px rgba(0,0,0,0.2);}";
  pageWeb += "h1{color:#2c3e50;text-align:center;margin-bottom:30px;font-size:2.5em;}";
  pageWeb += ".card{background:#f8f9fa;border-radius:10px;padding:20px;margin:15px 0;box-shadow:0 4px 6px rgba(0,0,0,0.1);transition:transform 0.3s;}";
  pageWeb += ".card:hover{transform:translateY(-5px);box-shadow:0 6px 12px rgba(0,0,0,0.15);}";
  pageWeb += ".btn{display:inline-block;background:#3498db;color:white;padding:12px 25px;text-decoration:none;border-radius:5px;margin:10px 5px;font-weight:bold;transition:background 0.3s;}";
  pageWeb += ".btn:hover{background:#2980b9;}";
  pageWeb += ".btn-danger{background:#e74c3c;}";
  pageWeb += ".btn-danger:hover{background:#c0392b;}";
  pageWeb += ".btn-success{background:#2ecc71;}";
  pageWeb += ".btn-success:hover{background:#27ae60;}";
  pageWeb += ".symbole-display{font-size:48px;text-align:center;margin:20px 0;padding:20px;background:#ecf0f1;border-radius:10px;}";
  pageWeb += ".info-box{background:#dff0d8;border-left:4px solid #3c763d;padding:15px;margin:20px 0;border-radius:0 5px 5px 0;}";
  pageWeb += ".symbol-grid{display:grid;grid-template-columns:repeat(auto-fill, minmax(50px, 1fr));gap:10px;margin:20px 0;}";
  pageWeb += ".symbol-cell{text-align:center;padding:10px;background:white;border:1px solid #ddd;border-radius:5px;font-size:24px;}";
  pageWeb += "</style></head><body>";
  pageWeb += "<div class='container'>";
  pageWeb += "<h1>📚 Bibliothèque Symboles ESP8266</h1>";
  
  pageWeb += "<div class='info-box'>";
  pageWeb += "<strong>📡 Connecté à :</strong> " + String(ssid) + "<br>";
  pageWeb += "<strong>📍 Adresse IP :</strong> " + WiFi.localIP().toString() + "<br>";
  pageWeb += "<strong>📶 Force signal :</strong> " + String(WiFi.RSSI()) + " dBm<br>";
  pageWeb += "<strong>🤖 Uptime :</strong> " + String(millis() / 1000) + " secondes";
  pageWeb += "</div>";
  
  pageWeb += "<div class='symbole-display'>";
  pageWeb += getSymboleUTF8(SYM_OUTIL_FUSEE) + " ";
  pageWeb += getSymboleUTF8(SYM_MATHS_PI) + " ";
  pageWeb += getSymboleUTF8(SYM_ELEC_RESISTANCE) + " ";
  pageWeb += getSymboleUTF8(SYM_METEO_SOLEIL) + " ";
  pageWeb += getSymboleUTF8(SYM_ETAT_OK) + " ";
  pageWeb += getSymboleUTF8(SYM_FLECHE_HAUT);
  pageWeb += "</div>";
  
  pageWeb += "<div class='card'>";
  pageWeb += "<h2>🔍 Navigation</h2>";
  pageWeb += "<a href='/symboles' class='btn'>📖 Voir tous les symboles</a>";
  pageWeb += "<a href='/test' class='btn btn-success'>🧪 Tester les fonctions</a>";
  pageWeb += "</div>";
  
  pageWeb += "<div class='card'>";
  pageWeb += "<h2>✨ Exemples Rapides</h2>";
  pageWeb += "<div class='symbol-grid'>";
  
  // Quelques symboles populaires
  unsigned int symbolesPopulaires[] = {
    SYM_DEGRE, SYM_PI, SYM_ELEC_RESISTANCE, SYM_ELEC_ECLAIR,
    SYM_METEO_THERMOMETRE, SYM_ETAT_OK, SYM_ETAT_ERREUR,
    SYM_FLECHE_HAUT, SYM_FLECHE_BAS, SYM_OUTIL_ENGRENAGE,
    SYM_MATHS_ALPHA, SYM_MATHS_BETA, SYM_MATHS_OMEGA
  };
  
  for (size_t i = 0; i < sizeof(symbolesPopulaires)/sizeof(symbolesPopulaires[0]); i++) {
    pageWeb += "<div class='symbol-cell'>" + getSymboleUTF8(symbolesPopulaires[i]) + "</div>";
  }
  
  pageWeb += "</div>";
  pageWeb += "</div>";
  
  pageWeb += "<div class='card'>";
  pageWeb += "<h2>📊 Informations système</h2>";
  pageWeb += "<p><strong>💾 Mémoire Flash :</strong> " + String(ESP.getFlashChipSize() / 1024) + " KB</p>";
  pageWeb += "<p><strong>🧠 Mémoire RAM :</strong> " + String(ESP.getFreeHeap() / 1024) + " KB libre</p>";
  pageWeb += "<p><strong>📶 Version SDK :</strong> " + String(ESP.getSdkVersion()) + "</p>";
  pageWeb += "<p><strong>🔧 Fréquence CPU :</strong> " + String(ESP.getCpuFreqMHz()) + " MHz</p>";
  pageWeb += "</div>";
  
  pageWeb += "</div>";
  pageWeb += "</body></html>";
}

// =============================================
// FONCTION POUR AFFICHER TOUS LES SYMBOLES VIA SERIAL
// =============================================

void afficherTousSymbolesSerial() {
  Serial.println(F("\n=== AFFICHAGE COMPLET DES SYMBOLES ==="));
  
  Serial.println(F("\n1. SYMBOLES ASCII (0-127):"));
  Serial.println(F("Code\tSymbole"));
  for (int code = 32; code <= 126; code++) { // Caractères imprimables seulement
    if ((code - 32) % 16 == 0) Serial.println();
    Serial.print(code);
    Serial.print(F(":\t"));
    Serial.print(getSymboleUTF8(code));
    Serial.print(F("\t"));
  }
  
  Serial.println(F("\n\n2. SYMBOLES DE BASE:"));
  unsigned int symbolesBase[] = {
    SYM_DEGRE, SYM_MICRO, SYM_PLUS_MINUS, SYM_SUPERIEUR_EGAL,
    SYM_INFERIEUR_EGAL, SYM_EGAL_APPROX, SYM_RACINE_CARREE,
    SYM_PUISSANCE_2, SYM_PUISSANCE_3, SYM_PUISSANCE_1,
    SYM_DIVISION, SYM_MULTIPLICATION, SYM_INFINI, SYM_INTEGRALE,
    SYM_SOMME, SYM_PI, SYM_POUR_MILLE, SYM_BULLET, SYM_POINT_MILIEU,
    SYM_POINTS_SUSPENSION, SYM_E_ACCENT_AIGU, SYM_E_ACCENT_GRAVE,
    SYM_E_CIRCONFLEXE, SYM_A_GRAVE, SYM_A_CIRCONFLEXE, SYM_C_CEDILLE,
    SYM_U_GRAVE, SYM_U_CIRCONFLEXE, SYM_O_CIRCONFLEXE
  };
  
  for (size_t i = 0; i < sizeof(symbolesBase)/sizeof(symbolesBase[0]); i++) {
    if (i % 8 == 0) Serial.println();
    Serial.print(symbolesBase[i]);
    Serial.print(F(":\t"));
    Serial.print(getSymboleUTF8(symbolesBase[i]));
    Serial.print(F("\t"));
  }
  
  #ifdef SYMBOLES_MATHS_UTF8
  Serial.println(F("\n\n3. SYMBOLES MATHÉMATIQUES:"));
  for (size_t i = 0; i < sizeof(symbolesMaths)/sizeof(symbolesMaths[0]); i++) {
    if (i % 8 == 0) Serial.println();
    Serial.print(getSymboleUTF8(symbolesMaths[i]));
    Serial.print(F(" "));
  }
  #endif
  
  #ifdef SYMBOLES_ELECTRIQUE_UTF8
  Serial.println(F("\n\n4. SYMBOLES ÉLECTRIQUES:"));
  for (size_t i = 0; i < sizeof(symbolesElectrique)/sizeof(symbolesElectrique[0]); i++) {
    if (i % 8 == 0) Serial.println();
    Serial.print(getSymboleUTF8(symbolesElectrique[i]));
    Serial.print(F(" "));
  }
  #endif
  
  #ifdef SYMBOLES_FLECHES_UTF8
  Serial.println(F("\n\n5. FLÈCHES:"));
  for (size_t i = 0; i < sizeof(symbolesFleches)/sizeof(symbolesFleches[0]); i++) {
    if (i % 8 == 0) Serial.println();
    Serial.print(getSymboleUTF8(symbolesFleches[i]));
    Serial.print(F(" "));
  }
  #endif
  
  #ifdef SYMBOLES_METEO_UTF8
  Serial.println(F("\n\n6. MÉTÉO:"));
  for (size_t i = 0; i < sizeof(symbolesMeteo)/sizeof(symbolesMeteo[0]); i++) {
    if (i % 6 == 0) Serial.println();
    Serial.print(getSymboleUTF8(symbolesMeteo[i]));
    Serial.print(F(" "));
  }
  #endif
  
  Serial.println(F("\n\n=== FIN DE L'AFFICHAGE ==="));
}
