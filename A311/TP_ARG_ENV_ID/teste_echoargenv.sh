#!/bin/sh

#TP_ARG_ENV_ID
#Made by Remy Aune
#08/09/2017


echo "Execution : echoargenv"
./echoargenv
echo "\n"
echo "--------------------------------------------------------"
echo "Execution : echoargenv PATH HOME PWD"
./echoargenv PATH HOME PWD
echo "\n"
echo "--------------------------------------------------------"
echo "Execution : echoargenv TOTO"
./echoargenv TOTO
echo "\n"
echo "--------------------------------------------------------"
echo "Ajout de TOTO comme variable d'environnement"
echo "Execution : export TOTO=\"mon test de TOTO\""
export TOTO="mon test de TOTO"
echo "\n"
echo "--------------------------------------------------------"
echo "Execution : echoargenv TOTO"
./echoargenv TOTO
