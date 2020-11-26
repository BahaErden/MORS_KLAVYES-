void mors()
{


  if (harf == ".-") {
    //Serial.println("A");
    Keyboard.print("a");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "-...") {
    Keyboard.print("b");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "-.-.") {
    Keyboard.print("c");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "-..") {
    Keyboard.print("d");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == ".") {
    Keyboard.print("e");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "..-.") {
    Keyboard.print("f");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "--.") {
    Keyboard.print("g");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "....") {
    Keyboard.print("h");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "..") {
    Keyboard.print("i");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == ".---") {
   Keyboard.print("j");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "-.-") {
    Keyboard.print("k");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == ".-..") {
    Keyboard.print("l");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "--") {
    Keyboard.print("m");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "-.") {
    Keyboard.print("n");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == "---") {
    Keyboard.print("o");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == ".--.") {
    Keyboard.print("p");
    Keyboard.releaseAll();
    harf = "";
  }
  else if (harf == ".-.") {
    Keyboard.print("r");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "..."){
    Keyboard.print("s");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "-"){
    Keyboard.print("t");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "..-"){
    Keyboard.print("u");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "...-"){
    Keyboard.print("v");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "-.--"){
    Keyboard.print("y");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "--.."){
    Keyboard.print("z");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == ".--"){
    Keyboard.print("w");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "-..-"){
    Keyboard.print("x");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "--.-"){
    Keyboard.print("q");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "......"){
    Keyboard.print(" ");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "----"){
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "...-."){
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "..--.."){
    Keyboard.press(KEY_CAPS_LOCK);
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == ".----"){
    Keyboard.print("1");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "..--"){
    Keyboard.print("2");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "...--"){
    Keyboard.print("3");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "...-"){
    Keyboard.print("4");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "....."){
    Keyboard.print("5");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "-...."){
    Keyboard.print("6");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "--..."){
    Keyboard.print("7");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "---.."){
    Keyboard.print("8");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "----."){
    Keyboard.print("9");
    Keyboard.releaseAll();
    harf = "";
  }
  else if(harf == "-----"){
    Keyboard.print("0");
    Keyboard.releaseAll();
    harf = "";
  }


  else if(harf == "----"){
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.releaseAll();
    harf = "";
  }

  else {// hiç biriyle eşleşmesse
    harf = "";
    led(0, 0, 255);
    delay(500);
    led(0, 0, 0);

  }
}
