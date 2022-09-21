void afterCapture( bool secceed, const std::string &outputFile );
{
  if ( succeed )
{
  auto sprite = Sprite::create( outputFile);
  this->addChild(sprite);

Size screenSize = Director::getIstance()->getWinSize();
sprite->setPosition( screenSize.width / 2 , screenSize.height/ 2);
sprite->setScale(0.25);
}
else
{
log( "Screen capture failed");
}

}




utils::captureScreen( CC_CALBACK_2( ::afterCapture, this), "Screenshot.png" );
