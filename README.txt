Stanford Google Custom Search for Drupal 7.x

-- SUMMARY --

Authors: Marco Wise, Brian Young

The Stanford Search module is a simple way to get Google Custom Search to work with Stanford-provided themes.

For a full description of the module, visit the project page:
  https://github.com/su-ddd/stanford_search/

To submit bug reports and feature suggestions, or to track changes:
  https://github.com/su-ddd/stanford_search/issues


-- LICENSE --

See the LICENSE file.


-- REQUIREMENTS --

The Stanford Search module requires that you set up a Google Custom Search Engine and retrieve its unique ID.
It also expects you to configure the search engine itself in a particular way. (See configuration section below).


-- INSTALLATION --

Disable Drupal's core search module.

Download and extract the module's package in your sites/all/modules directory.

As an admin, go to Administer > Site building > Modules to enable the module.
More detailed information on installing modules here: http://drupal.org/node/70151


-- CONFIGURATION --

First, create and configure the Google Custom Search Engine at https://www.google.com/cse/

- Choose the search engine you want to use under "Edit Search Engine"
- Under Setup > Basics > Sites to search, list the domain of the sites you want to search
- Under Setup > Admin, add any colleague with whom you want to share administration of the search engine 
- Under Look and Feel > Layout, choose "Two page", then:
-- Click "Save and Get Code"
-- On the next page, click "Search Results Details" and enter https://<yourwebsite url>.stanford.edu/search
   (your website's URL + /search) as the complete URL of your site where you want the search results to appear.
-- Specify the query parameter as: "q_as"
-- Click Save
- Under Business > Settings, select "do not show ads on results pages" if this is a stanford.edu website.
- Under Look and Feel > Themes, choose Default
- Under Look and Feel > Customize, choose the colors that best match your website
- Under Setup > Basics, in the details, click the "Search Engine ID" button. You'll need this ID to configure the module. 
  Your search engine's ID will be displayed in a pop-up. Copy and paste it into the configuration page for the module.

Then, configure the module on your Drupal site  at Administer > Site Configuration > Search and Metadata > Stanford Search.

- Enter the ID retrieved in the last step above


-- KNOWN ISSUES --

No known issues.


-- TROUBLESHOOTING --

If the search engine doesn't appear, make sure the "Search Form" block is enabled and assigned to the Search Box region for your theme.

If your search results appear on Google's site instead of your website, make sure you have followed the configuration steps above.
This is usually due to a missing "Search Results Details" URL.

If you encounter any issues while using this module at Stanford, please submit an issue on Github.
Please keep in mind that the goal of this module is to be simple, and to work with Stanford's suite of themes.

  https://github.com/su-ddd/stanford_search/issues
