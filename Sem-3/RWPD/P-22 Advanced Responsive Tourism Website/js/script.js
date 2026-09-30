// ==============================
// Explore Gujarat - Common JS
// ==============================

$(document).ready(function () {

    // Initialize Bootstrap tooltips
    $('[data-toggle="tooltip"]').tooltip();

    // Initialize Bootstrap popovers
    $('[data-toggle="popover"]').popover();

    // Close mobile navbar after clicking a link
    $('.navbar-nav .nav-link').on('click', function () {
        $('.navbar-collapse').collapse('hide');
    });

});