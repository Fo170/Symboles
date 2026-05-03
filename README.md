# Symboles Library
[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0)
[![Arduino](https://img.shields.io/badge/Arduino-IDE-00979C?style=flat&logo=arduino)](https://docs.arduino.cc/software/ide/)
[![Arduino Badge](https://img.shields.io/badge/framework-arduino-brightgreen?logo=arduino.svg)](https://www.arduino.cc/)
[![PlatformIO](https://img.shields.io/badge/PlatformIO-compatible-brightgreen.svg)](https://platformio.org/)
[![PlatformIO](https://img.shields.io/badge/platformio-All_µC-violet?logo=platformio)](https://platformio.org/)
[![Arduino Library Badge](https://www.ardu-badge.com/badge/Symboles.svg)](https://github.com/Fo170?tab=repositories)
![GitHub release](https://img.shields.io/github/v/release/Fo170/Symboles)
![GitHub last commit](https://img.shields.io/github/last-commit/Fo170/Symboles)

Bibliothèque Arduino/PlatformIO pour l'affichage de symboles spéciaux avec conversion UTF-8 universelle.

## 🚀 Fonctionnalités

- **Affichage universel** : Compatible avec toutes les plateformes Arduino et Framework Arduino
- **Conversion UTF-8** : Gestion automatique des caractères spéciaux et symboles
- **Léger et simple** : Une seule inclusion d'en-tête nécessaire
- **Multi-architecture** : Fonctionne sur ESP32, ESP8266, AVR, ARM, etc.

## 📦 Installation

### Méthode 1 : Via PlatformIO (recommandé)
Ajoutez la dépendance dans votre fichier `platformio.ini` :
```ini
lib_deps = 
    https://github.com/Fo170/Symboles.git@^1.0.0
