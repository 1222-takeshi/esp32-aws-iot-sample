/*
 * Connect_AWS.h
 */
#ifndef CONNECT_AWS_CONNECT_AWS_H_
#define CONNECT_AWS_CONNECT_AWS_H_
#include <Arduino.h>

#include "secrets.h"
#include <WiFiClientSecure.h>
#include <MQTTClient.h>
#include <ArduinoJson.h>
#include "WiFi.h"
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
class ConnectAWS
{
public:
  ConnectAWS(String pub_topic, String sub_topic);
  void connectToAWS();
  MQTTClient _client;

private:
  String _pub_topic;
  String _sub_topic;

};

#endif // CONNECT_AWS_CONNECT_AWS_H_
