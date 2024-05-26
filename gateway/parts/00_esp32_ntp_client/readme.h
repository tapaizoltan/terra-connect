/*
 * NTPClient
 * =========
 * 
 * You can specify the time server pool and the offset (in seconds, can be
 * changed later with setTimeOffset() ). Additionaly you can specify the
 * update interval (in milliseconds, can be changed using setUpdateInterval() ).
 * Set offset time in seconds to adjust for your timezone, for example:
 * 
 * GMT +1 = 3600
 * GMT +8 = 28800
 * GMT -1 = -3600
 * GMT 0 = 0
 * 
 * GMT+0 Greenwich Mean Time (GMT) Z (Zulu)
 * GMT+1 Central European Time (CET) A (Alpha)
 * GMT+2 Eastern European Time (EET) B (Bravo)
 * GMT+3 Moscow Time (MSK) C (Charlie)
 * GMT+4 Armenia Time (AMT)  D (Delta)
 * GMT+5 Pakistan Standard Time (PKT)  E (Echo)
 * GMT+6 Omsk Time (OMSK)  F (Foxtrot)
 * GMT+7 Kranoyask Time (KRAT) G (Golf)
 * GMT+8 China Standard Time (CST) H (Hotel)
 * GMT+9 Japan Standard Time (JST) I (India)
 * GMT+10  Eastern Australia Standard Time (AEST)  K (Kilo)
 * GMT+11  Sakhalin Time (SAKT)  L (Lima)
 * GMT+12  New Zealand Standard Time (NZST)  M (Mike)
 * 
 * GMT+0  Greenwich Mean Time (GMT) Z (Zulu)
 * GMT-1 West Africa Time (WAT)  N (November)
 * GMT-2 Azores Time (AT)  O (Oscar)
 * GMT-3 Argentina Time (ART)  P (Papa)
 * GMT-4 Atlantic Standard Time (AST)  Q (Quebec)
 * GMT-5 Eastern Standard Time (EST) R (Romeo)
 * GMT-6 Central Standard Time (CST) S (Sierra)
 * GMT-7 Mountain Standard Time (MST)  T (Tango)
 * GMT-8 Pacific Standard Time (PST) U (Uniform)
 * GMT-9 Alaska Standard Time (AKST) V (Victor)
 * GMT-10  Hawaii Standard Time (HST)  W (Whiskey)
 * GMT-11  Nome Time (NT)  X (X-ray)
 * GMT-12  International Date Line West (IDLW) Y (Yankee)
 * 
 * Example: NTPClient timeClient(ntpUDP, "<ntp_server_address>", <setTimeOffset>, <update_interval>);
 * Example: NTPClient timeClient(ntpUDP, "hu.pool.ntp.org", 3600, 60000);
 * 
 * Normal time: Serial.println(timeClient.getFormattedTime());
 * Linux Epoch time: Serial.println(timeClient.getEpochTime());







*/
