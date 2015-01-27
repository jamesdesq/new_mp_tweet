var link = document.getElementById("twitter-mention-button"); 

    link.addEventListener('click', function() { 

    // get the value of the text field

    var tweetText = document.getElementById("edit-email");

    console.log(tweetText.value);

    // get the original url 

    var originalUrl = document.getElementById("twitter-mention-button"); 

    // and get the href out of it

    var hrefValue = originalUrl.getAttribute("href");

    // switch the field value in the href 

    var editedHref = hrefValue.replace("holder", tweetText.value);

    // and swap it into the URL on screen

    originalUrl.setAttribute('href', editedHref);    


 
  }
, false); 


