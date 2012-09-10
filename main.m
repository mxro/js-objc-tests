// just some really bad objective-c code from Max that probably is incorrect :p

CallbackListener *callbackListener = [CallbackListener callbackListener];
 
id win = [webView windowScriptObject];
[win setValue:callbackListener forKey:@"CallbackListener"];


