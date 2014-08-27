Hi!

We worked with a development agency and one of their clients to create a social networking app for creative individuals.  We used their API to retrieve elements of the app such as user information and images.  We used AFNetworking to handle our web requests.  To optimize image loading we created a class which kicked off web requests in the background that we called once the login screen appeared.

My feature is where the user selects their interests.  These interests determine what shows up in their feed.  Other members can see if they share interests with you.  Items that are made by members that you might be interested in will populate your feed.

The sample code attached creates two scrollviews.  The first scrollview shows categories.  As you swipe through the categories, the interests that fall under those categories will appear in the second scrollview.  This was my innovation to the original design which required users to click on categories for interests to appear.  I believe that swiping provides a smoother user experience.

Each category you see is comprised of a container view that holds a teal-colored background view that is hidden until a user interacts with an interest.  Using the scrollview delegate protocol, I determine the index of the category in focus by figuring out the current offset of the content view.  Based on this index, I display the corresponding interests in the second scrollview.

I retrieve a user’s interests using an API call and those will appear pre-selected.  If the user wishes to add an interest, clicking on one will send a POST request to the API.

For improvements, I should create variables for the many constants I use related to the size of the elements.  I have also received a suggestion by another developer to use collection views which would be more efficient.  To handle interest taps I add a gesture recognizer to the container view of the interest and cycle through each subview.  I believe creating tags and directly accessing the element with a specific tag is more efficient and concise.